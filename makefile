string: string.cpp expression.cpp list.cpp node.cpp
	g++ -o string string.cpp expression.cpp list.cpp node.cpp

node.o: node.h node.cpp
	g++ -c node.cpp
