
#ifndef GRAPH_UTILS_H
#define GRAPH_UTILS_H

#include "./graph.hpp"
#include <vector>
#include <set>
#include <unordered_set>
#include <stack>
#include <utility>
#include <limits>


using namespace std;

class GraphUtils{

    public:

    static void DFS(Graph &graph, int node, vector<int> &dfsFinishOrder);
    static int minVertexCoverForTrees(Graph &graph);
    static int aproxVertexCover(Graph &graph);

};

#endif