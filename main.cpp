#include <vector>
#include <iostream>
#include <fstream>

#include "./lib/graph.hpp"

using namespace std;

Graph readInput(char** argv){

    int x, y, aux1, aux2;
    fstream file(argv[1], ios::in);

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
    for(int i=0; i<graph.getNumberOfNodes(); i++){
        for(int v : graph.getNeighbors(i)){
            cout << "vizinhos de" << i << ": " << v << " ";
        }
        cout << "\n";
    }

    ///home/jvtaufner/ufmg/alg1/alg1_tp3/test_cases_prof/ct00.txt




    



}