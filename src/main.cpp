#include <iostream>
#include "graph/Vertex.h"
#include "graph/Graph.h"
#include "entity/City.h"
#include "entity/StringElement.h"
#include "algorithms/DijkstraAlgorithm.h"

void cities();

void stringElements();

void runDijkstraAlgorithm(Graph *graph, Object *sourceObj, Object *targetObj);

int main() {
    stringElements();
    cout<<"-------------------------------------"<<endl;
    cities();
    return 0;
}

void stringElements() {

    auto *graph = new Graph(true);
    //----------------
    //Change me!

    Object *a = new StringElement("A");
    Object *b = new StringElement("B");
    Object *c = new StringElement("C");
    Object *d = new StringElement("D");
    Object *e = new StringElement("E");
    Object *f = new StringElement("F");
    Object *g = new StringElement("G");
    Object *h = new StringElement("H");
    Object *i = new StringElement("I");
    Object *j = new StringElement("J");
    cout << endl << "* Graph: " << endl;
    graph->addEdge(a,b,20);
    graph->addEdge(a,c,12);
    graph->addEdge(a,d,9);
    graph->addEdge(b,c,11);
    graph->addEdge(b,e,13);
    graph->addEdge(c,d,3);
    graph->addEdge(c,e,4);
    graph->addEdge(c,g,17);
    graph->addEdge(d,f,10);
    graph->addEdge(e,h,6);
    graph->addEdge(f,i,8);
    graph->addEdge(f,g,7);
    graph->addEdge(g,h,16);
    graph->addEdge(g,j,18);
    graph->addEdge(h,j,2);
    graph->addEdge(i,j,21);
    graph->addEdge(i,g,5);

    //----------------

    graph->print();

    runDijkstraAlgorithm(graph, a, h);

}

void cities() {
    auto *graph = new Graph(true);

    City *sanFrancisco = new City("San Francisco");
    City *seattle = new City("Seattle");
    City *riverside = new City("Riverside");
    City *losAngeles = new City("Los Angeles");
    City *phoenix = new City("Phoenix");
    City *dallas = new City("Dallas");
    City *houston = new City("Houston");
    City *miami = new City("Miami");
    City *atlanta = new City("Atlanta");
    City *chicago = new City("Chicago");
    City *detroit = new City("Detroit");
    City *boston = new City("Boston");
    City *newYork = new City("New York");
    City *philadelphia = new City("Philadelphia");
    City *washington = new City("Washington");


    graph->addEdge(sanFrancisco, seattle, 678);
    graph->addEdge(seattle, chicago, 1737);
    graph->addEdge(chicago, detroit, 238);
    graph->addEdge(detroit, boston, 613);
    graph->addEdge(detroit, newYork, 482);
    graph->addEdge(detroit, washington, 396);
    graph->addEdge(boston, newYork, 190);
    graph->addEdge(newYork, philadelphia, 81);
    graph->addEdge(philadelphia, washington, 123);
    graph->addEdge(washington, miami, 923);
    graph->addEdge(washington, atlanta, 543);
    graph->addEdge(atlanta, miami, 604);
    graph->addEdge(atlanta, dallas, 721);
    graph->addEdge(atlanta, houston, 702);
    graph->addEdge(houston, miami, 968);
    graph->addEdge(dallas, houston, 225);
    graph->addEdge(phoenix, dallas, 887);
    graph->addEdge(phoenix, houston, 1015);
    graph->addEdge(riverside, phoenix, 307);
    graph->addEdge(losAngeles, phoenix, 357);
    graph->addEdge(losAngeles, riverside, 50);
    graph->addEdge(riverside, chicago, 1704);
    graph->addEdge(losAngeles, sanFrancisco, 348);
    graph->addEdge(riverside, sanFrancisco, 386);
    graph->addEdge(dallas, chicago, 805);
    graph->addEdge(chicago, atlanta, 588);



    //continue here...

    //----------------

    cout << endl << "* Graph: " << endl;
    graph->print();
    cout << "Source Vertex is Riverside";
    runDijkstraAlgorithm(graph, riverside, philadelphia);
    cout << endl;

    cout<< "Shortest path between SF and Atlanta";
    runDijkstraAlgorithm(graph, sanFrancisco,atlanta);

    delete (graph);
}

/*
 * Runs Dijkstra's algorithm on graph using source object.
 * It prints the result of the algorithm and also the shortest path from the source object to the target object.
 */
void runDijkstraAlgorithm(Graph *graph, Object *sourceObj, Object *targetObj) {
    auto *algorithm = new DijkstraAlgorithm(graph);
    DijkstraOutput *output = algorithm->findShortestPaths(sourceObj);

    cout << endl << "* Dijkstra's result: " << endl;
    if (output != nullptr) {
        output->print();
        cout << endl;
        output->printShortestPath(targetObj);
    } else{
        cout <<"No output"<< endl;
    }

    delete (output);
    delete (algorithm);
}
