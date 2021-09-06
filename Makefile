tp02: main.o graph.o graph_utils.o
	g++ main.o graph.o graph_utils.o -o tp03
main.o: main.cpp
	g++ -c main.cpp
graph.o: ./src/graph.cpp
	g++ -c ./src/graph.cpp
graph_utils.o: ./src/graph_utils.cpp
	g++ -c ./src/graph_utils.cpp
clean:
	rm *.o tp03
