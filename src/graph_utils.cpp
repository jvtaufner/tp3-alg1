#include "../lib/graph_utils.hpp"

/*void GraphUtils::DFS(Graph &graph, int node, vector<pair<int, int>> &subproblem, stack<int> &dfsFinishOrder){

    graph.setVisited(node);

    for(int v : graph.getNeighbors(node)){
        if(!graph.getVisited(v)){
            DFS(graph, v, subproblem);
        }
    }

    for(int v : graph.getNeighbors(node)){
        if(v != node){

            subproblem[node].second += subproblem[v].first;
            subproblem[node].first += min(subproblem[v].first, subproblem[v].second);
        }


    }

}*/

void GraphUtils::DFS(Graph &graph, int node, vector<int> &dfsFinishOrder){

    graph.setVisited(node);

    for(int v: graph.getNeighbors(node)){
        if(!graph.getVisited(v)){
            DFS(graph, v, dfsFinishOrder);
        }
    }
    dfsFinishOrder.push_back(node);
}

int GraphUtils::minVertexCover(Graph graph){

    vector<pair<int, int>> subproblem (graph.getNumberOfNodes(), make_pair(-1, -1)); //primeiro caso inclua, segundo caso exclua
    vector<int> dfsFinishOrder;
    DFS(graph, 0,  dfsFinishOrder);

    int minVertexCover = -1;

    for(int node: dfsFinishOrder){

        subproblem[node].first = 1;
        subproblem[node].second = 0;

        for(int v: graph.getNeighbors(node)){
            if(subproblem[v].first >=0 ){

                subproblem[node].second += subproblem[v].first;
                subproblem[node].first += min(subproblem[v].first, subproblem[v].second);
            }
        }
    }
    /*for(auto c : subproblem){
        cout << c.first << "," << c.second << endl;
        //qint aux = min(c.first, c.second);
        //minimo = min(aux, minimo);
    }*/

    return min(subproblem[dfsFinishOrder[graph.getNumberOfNodes()]].first, subproblem[dfsFinishOrder[graph.getNumberOfNodes()]].second);

}