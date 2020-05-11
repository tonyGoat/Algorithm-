#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

class Sudoku{

private:
    int sudo[9][9];

public:
    Sudoku();
    void printSudoku();
    void readFromFile(string str);
};



Sudoku::Sudoku(){
    for (int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            sudo[i][j] = 0;
        }
    }
}


void Sudoku::printSudoku() {
    string line = "+-------+-------+-------+";
    string vertical = "|";
    string space = " ";
    cout << line << endl;

    for (int i=0;i<9;i++) {
        cout << vertical;
        for (int j = 0; j < 9; j++) {
            if (sudo[i][j] == 0) {
                cout << space  << ".";
            } else {
                cout << space << sudo[i][j];
            }
            if (j== 2 || j == 5)
                cout << space << vertical;
        }
        cout << space << vertical<< endl;
        if (i == 2 || i == 5 || i == 8)
            cout << line << endl;
    }
}


void Sudoku::readFromFile(string p) {
    string read[9];
    short ind = 0;
    std::string line, word;
    auto File = p;
    std::ifstream in(File);
    if (in.is_open()) {

        while (getline(in, line)) {
            string word = "";
            for (auto x : line) {
                if (x !=' ' && x!= '\\'){
                    word = word+ x;
                    read[ind] = word;
                }
                else if (x == '\\') {
                    ind++;
                    word = "";
                }
                }
            }
        in.close();
    }else{
       cout << "unable to open file";
    }


    for (int i=0; i<9;i++){
        for(int j=0;j<9;j++){
            if(isdigit(read[i].at(j))) {
                char c;
                c = read[i].at(j);
                int x = c - '0';
                sudo[i][j] = x;
            }

        }
    }
}


int main(int argc, char *argv[]){
    auto file = argv[1];
    string s(file);
    Sudoku su;
    su.readFromFile(file);
    su.printSudoku();
}

