//
// Created by spear on 5/6/2020.
//

#ifndef UNIONBYSIZE_KRUSKAL_H
#define UNIONBYSIZE_KRUSKAL_H
#include <iostream>
#include <vector>

using namespace std;

class Kruskal {
private:


public:
    int id[10]{};

    Kruskal() {
        for (int &i : id) {
            i = -1;
        }
    }

    int find(int p) {

        while (p != id[p]) {
            if (id[p] < 0){
                return p;
            }
            p = id[p];

        }
        return p;
    }

    void unionOp(int a,int b,int c) {
        if (!check(a, b)) {
           // cout<<"false 111";
            return;
        } else {

            int r = find(a);
            int s = find(b);

            if (r == s)return;
            else if (id[r] < id[s]) {
                id[r] += id[s];
                id[s] = r;
            } else {
                id[s] += id[r];
                id[r] = s;
            }
         cout<< "[" << a<< "->" <<b << "]" <<"weight:"<<c << ", ";
        }
    }

    bool check(int a, int b){
        int r = find(a);
        int s = find(b);
        return r != s;
    }


};

#endif //UNIONBYSIZE_KRUSKAL_H
