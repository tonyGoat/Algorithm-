//
// Created by spear on 5/5/2020.
//

#ifndef UNIONBYSIZE_UNIONBYSIZE_H
#define UNIONBYSIZE_UNIONBYSIZE_H
#include <iostream>
#include <vector>

using namespace std;

class UnionBySize{
private:


public:
    int id[16]{};

    UnionBySize(){
        for(int & i : id){
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


    int findPathCompression(int p){
        if(id[p] < 0){
            return p;
        }
        id[p] = findPathCompression(id[p]);
        return id[p];
    }




    void unionOp(int a,int b){
        int r = find(a);
        int s = find(b);

        if (r==s)return;
        else if (id[r] < id[s]) {
            id[r] += id[s];
            id[s] = r;
        }
        else {
            id[s] += id[r];
            id[r] = s;
        }
    }

    void unionOpPathCompression(int a,int b){
        int r = findPathCompression(a);
        int s = findPathCompression(b);

        if (r==s)return;
        else if (id[r] < id[s]) {
            id[r] += id[s];
            id[s] = r;
        }
        else {
            id[s] += id[r];
            id[r] = s;
        }
    }


    void print(){
        cout << "[" ;
        for (int i = 0; i < 16 ; i++){
            cout << i << ":" << id[i] << ", ";

        }
        cout <<"\b";
        cout <<"\b";
        cout << "]";
    }




};
#endif //UNIONBYSIZE_UNIONBYSIZE_H
