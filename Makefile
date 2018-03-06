main.o: main.cpp List.h 
	g++ -c main.cpp -std=c++17 
list.o: list.cpp List.h 
	g++ -c List.cpp -std=c++17 
link_all: main.o List.o 
	g++ main.o List.o -o out
