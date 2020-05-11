//
// Created by ojcch on 4/24/2020.
//

#ifndef GRAPHS_DIJKSTRAOUTPUT_H
#define GRAPHS_DIJKSTRAOUTPUT_H
#include <algorithm>

#include <limits>
#include <vector>
#include <unordered_map>
#include <sstream>
#include <string>
#include <iostream>
#include "graph/Graph.h"
using namespace std;
/*
 * Class that represents the output of Dijsktra's algorithm, composed of:
 * 1. the distance map
 * 2. the map that stores the shortest path tree
 */
class DijkstraOutput {
private:
    //graph that this output applies to
    Graph *graph;
    //map of distances, each vertex id maps to its shortest path distance from a source vertex
    unordered_map<int, double> *dist;
    //map that stores the shortest path tree for a source vertex.
    //each vertex id maps to its parent vertex in the tree
    unordered_map<int, int> *prev;
public:

    //constructor
    DijkstraOutput(Graph *graph, unordered_map<int, double> *dist, unordered_map<int, int> *prev) {
        this->graph = graph;
        this->dist = dist;
        this->prev = prev;
    }

    //prints the output
    void print() {
        cout << "dist[]: ";
        for (auto x:*dist) {
            cout << "{";
            cout << graph->getVertex(x.first)->toString();
            cout << "-> ";
            cout << x.second;
            cout << "}, ";


        }
        cout << '\b';
        cout << endl;

        //continue here...


        cout << "prev[]: ";
        //continue here...
        for (auto x:*prev) {
            cout << "{";
            cout << graph->getVertex(x.first)->toString();
            cout << "-> ";
            cout << x.second;
            cout << "}, ";


        }
        //cout << "\b";
        cout << endl;

    }



//prints the shortest path from the source vertex to targetObj
    void printShortestPath(Object *targetObj) {

        Vertex *targetVertex = graph->getVertex(targetObj, true);
        int d = dist->at(targetVertex->getId());
        int id = prev->at(targetVertex->getId());
        vector<int> vec;
        vec.push_back(targetVertex->getId());
        while (d!=0){
            d = dist->at(id);
            vec.push_back(id);
            id = prev->at(id);

        }
        reverse(vec.begin(),vec.end());

        for (auto x:vec){
            cout << graph->getVertex(x)->toString() << "->";
        }

        cout << "\b";
        cout << "\b";
        cout << ", Total cost: " << dist->at(targetVertex->getId());
    }

    //destructor
    ~DijkstraOutput() {
        delete (dist);
        delete (prev);
    }
};


#endif //GRAPHS_DIJKSTRAOUTPUT_H
