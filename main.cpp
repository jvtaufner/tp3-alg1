#include <vector>
#include <iostream>
#include <fstream>

#include "./lib/graph.hpp"
#include "./lib/graph_utils.hpp"

using namespace std;

Graph readInput(char** argv){

    int x, y, aux1, aux2;
    fstream file(argv[2], ios::in);

    file >> x >> y;
    Graph graph(x, y);


    for(int i=0; i<y; i++){
        file >> aux1 >> aux2;
        graph.addEdge(aux1, aux2);

    }

    return graph;
}

int main(int argc, char** argv){

    Graph graph = readInput(argv);
    string arg = argv[1];

    if(arg == "tarefa1"){

        cout << GraphUtils::minVertexCoverForTrees(graph) << endl;

    }

    else if(arg == "tarefa2"){
        cout << GraphUtils::aproxVertexCover(graph) << endl;
        for(int i=0; i<graph.getNumberOfNodes(); i++){
            if(graph.getVisited(i)){
                cout << i << endl;
            }
        }
    }

    else{
        cout << "input invalido";
    }
    

    ///home/jvtaufner/ufmg/alg1/alg1_tp3/test_cases_prof/ct00.txt

}