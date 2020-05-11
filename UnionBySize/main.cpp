#include <iostream>
#include "UnionBySize.h"
#include "Kruskal.h"
int main() {
    UnionBySize UU;
    UU.unionOp(8,9);
    UU.unionOp(6,11);
    UU.unionOp(4,6);
    UU.unionOp(1,9);
    UU.unionOp(1,12);
    UU.unionOp(1,2);
    UU.unionOp(11,0);
    UU.unionOp(7,0);
    UU.unionOp(8,12);
    UU.unionOp(3,5);
    UU.unionOp(3,4);
    UU.unionOp(7,9);
    UU.unionOp(10,11);


    cout<< "Part d: ";
    UU.print();
    cout << endl;
    cout<< "Part e: ";
    UU.findPathCompression(1);
    UU.print();

    cout << endl;
    cout<< "Part f: ";
    UU.unionOp(13,3);
    UU.print();

    cout << endl;
    cout<< "Part g: ";
    UU.unionOpPathCompression(14,3);
    UU.unionOpPathCompression(15,2);
    UU.print();

    cout << endl;
    cout << "The edges in MST are: ";
    Kruskal K;
    K.unionOp(7,9,2);
    K.unionOp(2,3,3);
    K.unionOp(2,4,4);
    K.unionOp(6,8,5);
    K.unionOp(4,7,6);
    K.unionOp(5,6,7);
    K.unionOp(5,8,8);
    K.unionOp(0,3,9);
    K.unionOp(3,5,10);
    K.unionOp(1,2,11);
    K.unionOp(0,2,12);
    K.unionOp(1,4,13);
    K.unionOp(6,7,16);
    K.unionOp(2,6,17);
    K.unionOp(6,8,18);
    K.unionOp(1,2,20);
    K.unionOp(8,9,21);






}
