#include <iostream>
#include <fstream>
#include <chrono>
using namespace std;
using namespace std::chrono;



int fib_r(int n)
{
    if(n==1)
        return 1;
    if(n==0)
        return 0;
    else
        return fib_r(n-1)+fib_r(n-2);
}

int fib_i(int x)
{
    int a;
    int b;
    int c;
    a = 0;
    b = 1;

    for (int i = 1; i < x; i++) {
        c = a+b;
        a = b;
        b = c;

    }
    return c;

}


int main(){
    int t;
    t = 2000000;
    std :: ofstream myFile("time.csv");
    myFile <<"n, 2n, A2(n), A2(2n), T'2(n), T'2(2n), r, \n";


    for (int i = 0; i<=1000; i++  ){

        auto start = high_resolution_clock::now();
        fib_i(t+i);
        auto stop = high_resolution_clock::now();
        auto duration_n = chrono::duration_cast<chrono::microseconds>(stop - start);
        float t_1;
        t_1 = (duration_cast<microseconds>(stop - start)).count();

        auto start_2n = high_resolution_clock::now();
        fib_i(2*(t+i));
        auto stop_2n = high_resolution_clock::now();
        auto duration_2n = duration_cast<microseconds>(stop_2n - start_2n);
        float t_2;
        t_2 = duration_cast<microseconds>(stop_2n - start_2n).count();


        myFile << t+i << "," << 2*(t+i) << "," << fib_i(t+i) << "," << fib_i(2*(t+i)) << "," << t_1 << ',' << t_2<<','<< t_2/t_1<< std ::endl;

    }

    myFile.close();
    return 0;
}
