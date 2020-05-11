#include <iostream>
#include "DirectedGraph.h"

int main() {
    DirectedGraph* graph =new DirectedGraph(13);

    graph->add_edge(0,1);
    graph->add_edge(0,5);
    graph->add_edge(2,0);
    graph->add_edge(2,3);
    graph->add_edge(3,2);
    graph->add_edge(3,5);
    graph->add_edge(4,2);
    graph->add_edge(4,3);
    graph->add_edge(5,4);
    graph->add_edge(6,0);
    graph->add_edge(6,4);
    graph->add_edge(6,8);
    graph->add_edge(6,9);
    graph->add_edge(7,6);
    graph->add_edge(7,9);
    graph->add_edge(8,6);
    graph->add_edge(9,10);
    graph->add_edge(9,11);
    graph->add_edge(10,12);
    graph->add_edge(11,4);
    graph->add_edge(11,12);
    graph->add_edge(12,9);
    graph->print();


    //cout << graph->num_vertices();

    cout << "Result of edges(6): " <<endl;
    graph->edges(6);
    cout <<endl ;
    cout << "Result of adj(6): " <<endl;
     graph->adj(6)  ;
    cout <<endl ;
    cout << "Result of outAdj(6): " <<endl;
     graph->outAdj(6)  ;
    cout <<endl ;

    cout << "Result of edge(9,10): " <<endl;
    cout << graph->edge(9,10)  ;
    cout <<endl ;

    cout << "Result of edge(12,10): " <<endl;
    cout << graph->edge(12,10)  ;
    cout <<endl ;






//    graph->adj(0);
//    graph->outAdj(0);


    //cout << graph->num_edges();
    //cout << graph->num_vertices();

    return 0;
}
