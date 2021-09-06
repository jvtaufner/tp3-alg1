
tp03: main.o graph.o 
	g++ main.o graph.o -o tp03
main.o: main.cpp
	g++ -c main.cpp
graph.o: ./src/graph.cpp
	g++ -c ./src/graph.cpp
clean:
	rm *.o tp03
