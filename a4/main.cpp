#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>
#include <iterator>

using namespace std;

class MailingAddress{

public:
    string street;
    string city;
    string state;
    int zipcode;
    string toString();
    bool equals(MailingAddress addr);
    MailingAddress(string line);
};

string MailingAddress::toString(){
    auto output = '{' + street  + ',' +  ' '+ city + ',' + ' ' + state + ',' + ' ' + to_string(zipcode) + '}';
    return output;
}

bool MailingAddress::equals(MailingAddress addr){
    return this->toString() == addr.toString();
}


MailingAddress::MailingAddress(string line){
    stringstream ss(line);
    string token;
    vector<string> array;

    while (getline(ss,token, ',')){
        array.push_back(token);
    }
    street = array[0];
    city =  array[1];
    state=  array[2];
    zipcode = std::stoi(array[3]);
}

class MAHashTable{
public:
    static const int M = 91;
    static const int R = 31;
    vector<MailingAddress> table[M];

    MAHashTable(){
        vector<MailingAddress> table[M];
    }
    static long hashInt(int i);
    static long hashString(string s);
    static long hashAddress(MailingAddress addr);
    void insert(MailingAddress addr);
    void print();
    bool contains(MailingAddress addr);
};

const int MAHashTable:: M;
const int MAHashTable:: R;

bool MAHashTable::contains(MailingAddress addr) {
    int count = 0;
    for (int i = 0; i < M; i++) {
            for (auto x : table[i]) {
                 if (x.equals(addr))
                     count++;
            }
    }
    return count >= 1;
    }


long MAHashTable::hashInt(int i){
    return i % M;
}

/* A ​static ​method called ​hashString ​that receives a string ​s and returns a ​long number.
 * The method should return the hash of the string using the hash function h(ci) = (R * h(ci−1) + ci) % M ,
 * where ci is the i-th character of ​s and h(c1) = c1 % M (​M and R are defined above).
 * The method should iterate over each character of the string to compute the overall string hash, i.e., h(s) = ∑i h(ci )*/

long MAHashTable::hashString(string s){
    int i = 0;
    unsigned long hash = 0;
    int hash_temp;
    int c_i = 0;
    for (char c : s){
        if (i ==0) {
            int c_i = hashInt(c);
            hash_temp = c_i;
            hash = hash_temp;
            i++;
        }else{
            hash_temp = (R * hash_temp + c) % M;
            hash = hash + hash_temp;
        }
    }
    return hash;
}


long MAHashTable::hashAddress(MailingAddress addr){
    long int hash;
    hash = (((((hashString(addr.street) * R + hashString(addr.city)) % M) * R + hashString(addr.state)) % M) * R + hashInt(addr.zipcode)) % M;
    return hash;

}

void MAHashTable::insert(MailingAddress addr){
    int hash = hashAddress(addr);
    table[hash].push_back(addr);
}

void MAHashTable::print() {
    for (int i = 0; i < M; i++) {
        cout << i << "->";
        if ((table[i].empty())) {
            cout << "[]";
            cout << endl;
        } else {
            cout << '[';
            string output = "";
            for (auto x : table[i]) {
                output = output + x.toString() + ';';
            }
            output.pop_back();
            cout << output;
            cout <<']';
            cout << endl;
        }

    }
}



int main(int argc, char *argv[]){
    auto file = argv[1];
    string s(file);
    std::string line;
    //auto myFile = "C:\\Users\\spear\\Desktop\\repo_zyang07\\a4\\addresses.txt";
    std::ifstream in(file);
    MAHashTable hashing;
    if (in.is_open()) {
        while (getline(in, line)) {
            MailingAddress test(line);
            hashing.insert(test);
        }
        in.close();
    }else{
        cout << "Unable to open file";
    }
    hashing.print();
    MailingAddress a1("450 Highland Ave,Salem,MA,1970");
    cout <<"Test Address: 450 Highland Ave,Salem,MA,1970    Result: ";
    cout << hashing.contains(a1);
    cout << endl;
    MailingAddress a2("450 Highland Avenue,Salem,MA,1970");
    cout <<"Test Address: 450 Highland Avenue,Salem,MA,1970    Result: ";
    cout << hashing.contains(a2);
    return 0;
}

