#ifndef GRAPH_H
#define GRAPH_H

#include <vector>
#include <iostream>

using namespace std;

class Graph{

    private:

        int numberOfNodes;
        int numberOfEdges;
        vector<vector<int>> adjList;
        
    public:
        
        Graph(int numberOfNodes, int numberOfEdges);
        Graph(int numberOfNodes);
        void addEdge(int node1, int node2);
        vector<int> getNeighbors(int node);
        int getNumberOfNodes();
        int getNumberOfEdges();
        void setNumberOfEdges(int numberOfEdges);
     
};


#endif