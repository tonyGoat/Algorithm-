//
// Created by ojcch on 4/19/2020.
//

#ifndef GRAPHS_DIJKSTRAALGORITHM_H
#define GRAPHS_DIJKSTRAALGORITHM_H

#include <iostream>
#include "DijkstraOutput.h"
#include <graph/Graph.h>

using namespace std;

/*
 * Class that implements Dijkstra's algorithm.
 */
class DijkstraAlgorithm {

private:
    //graph that this algorithm will operate on
    Graph *graph;
    //map of distances, each vertex id maps to its shortest path distance from a source vertex
    unordered_map<int, double> *dist;
    //map that stores the shortest path tree for a source vertex.
    //each vertex id maps to its parent vertex in the tree
    unordered_map<int, int> *prev;
    //set of unknown vertices (i.e., those not belong to S)
    unordered_set<int> *unknown;

    //performs the initialization step of the algorithm
    void initialize(Vertex *sourceVtx) {

        //every time there is an initialization, start over
        //every time there is an initialization, start over
        delete dist;
        delete prev;
        delete unknown;
        this->dist = new unordered_map<int, double>();
        this->prev = new unordered_map<int, int>();
        this->unknown = new unordered_set<int>();
        unordered_map<int, Vertex *>* vect = graph->getVertices();
        for(auto x:*vect){

            unknown->insert(x.first);
        }

        for (auto x: *unknown){
            dist->insert({x,9999});
            prev->insert({x,0});

        }


    }

    //finds the vertex with the minimum dist among  all unknown vertices
    Vertex *findMinDistVertex() {

        int min = dist->at(*unknown->begin());
        int temp_ver = *unknown->begin();
        for (auto i: *unknown) {
            int temp = dist->at(i);
            if (temp < min) {
                min = temp;
                temp_ver = i;
            }
        }
        return graph->getVertex(temp_ver);


    }

    //relaxes the outgoing edges of v
    void relaxOutGoingEdges(Vertex *v) {
        vector<Edge *> * vec = graph->getOutGoingEdges(v);
        for(auto x: *vec){
            if(x->getWeight() + dist->at(v->getId()) < dist->at((x->getTarget())->getId())){
                dist->at(x->getTarget()->getId()) = x->getWeight() + dist->at(v->getId());
                prev->at(x->getTarget()->getId()) = v->getId();

            }

        }
    }

public:

    //destructor
    ~DijkstraAlgorithm() {
        delete (dist);
        delete (prev);
        delete unknown;
    }

    //constructor
    explicit DijkstraAlgorithm(Graph *pGraph) {
        graph = pGraph;
        this->dist = new unordered_map<int, double>();
        this->prev = new unordered_map<int, int>();
        this->unknown = new unordered_set<int>();
    }

    //runs the algorithm on source vertex (data) v
    DijkstraOutput *findShortestPaths(Object *v) {

        Vertex *sourceVertex = graph->getVertex(v, true);
        initialize(sourceVertex);
        dist->at(sourceVertex->getId()) = 0;
        prev->at(sourceVertex->getId()) = 0;
        relaxOutGoingEdges(sourceVertex);
        unknown->erase(sourceVertex->getId());

        while(!unknown->empty()){

            relaxOutGoingEdges(findMinDistVertex());
            int i = (findMinDistVertex()->getId());
            unknown->erase(i);

        }

        return new DijkstraOutput(graph, new unordered_map<int, double>(*dist), new unordered_map<int, int>(*prev));
    }



};


#endif //GRAPHS_DIJKSTRAALGORITHM_H
