//
// Created by ojcch on 4/15/2020.
//

#ifndef GRAPHS_DIRECTEDGRAPH_H
#define GRAPHS_DIRECTEDGRAPH_H

#include <iostream>
#include <vector>
#include <unordered_set>


using namespace std;

class DirectedGraph {
private:

public:
    vector<int>* pointin;
    vector<int>* pointout;
    int n_edges = 0;
    int n_vertices;

    DirectedGraph() {
    }

    DirectedGraph(int numberOfVertices) {
        n_vertices = numberOfVertices;
        pointout = new vector<int> [n_vertices];
        pointin = new vector<int> [n_vertices];

    }

    //return the number of edges
    int num_edges() {
        return n_edges;
    }

    //return the number of vertices
    int num_vertices() {
        return n_vertices;
    }

    //adds an edge connecting v and w (v->w)
    void add_edge(int v, int w) {
        if (pointout[v].empty() && pointin[v].empty()){
            n_vertices +=1;
        }
        if (pointout[w].empty() && pointin[w].empty()){
            n_vertices +=1;
        }

        if (!edge(v,w)){
            pointout[v].push_back(w);
            pointin[w].push_back(v);
            n_edges += 1;
        }



    }

    //checks if there is an edge connecting v and w (v->w)
    bool edge(int v, int w) {
        for (auto x :pointout[v]){
            if (x == w){
                //cout << "true";
                return true;
            }
        }
        //cout <<"false";
        return false;
    }

    //finds all edges (x, y) involving  v, i.e., x = v or y = v
    vector<pair<int, int>> *edges(int v) {
        vector<pair<int,int>> pairs;
        pair<int,int> making;

        for (auto x : pointout[v]){
            making = std::make_pair(v,x);
            pairs.push_back(making);
        }
        for(auto x:pointin[v]){
            making = std::make_pair(x,v);
            pairs.push_back(making);
        }
        for (auto x: pairs){
            cout << "(" <<x.first << "," << x.second << ")" << endl;
        }
        return nullptr;
    }

    //finds all vertices that are neighbors of v (i.e. all vertices adjacent to v)
    vector<int> *adj(int v) {
        vector<int> adjj;
        for(auto x:pointout[v]){
            adjj.push_back(x);
        }
        for(auto x:pointin[v]){
            adjj.push_back(x);
        }
        std::unordered_set<int> set(adjj.begin(), adjj.end());
        for (const int &i: set) {
            std::cout << i << " ";
        }
        return nullptr;
    }

    //finds all vertices that v points to (v->x), ie., the vertices x in the edges (v, x)
    vector<int> *outAdj(int v) {
        vector<int> outadjj;
        for(auto x:pointout[v]){
            outadjj.push_back(x);
        }
        for(auto x:outadjj){
            cout << x << " ";
        }
        return nullptr;
    }

    void print() {
        cout << "Printing the graph..." << endl;
        for (int x = 0; x < 13; x++){
            cout << x << "->[";
            if ((pointout[x].empty()))
                cout << "]" << endl;

            for (auto i: pointout[x]){
                if (i == pointout[x].back())
                    cout << i << "]" <<endl;
                else
                    cout << i << ", ";
            }
        }

    }

};


#endif //GRAPHS_DIRECTEDGRAPH_H
