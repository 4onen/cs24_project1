string: string.cpp expression.cpp list.cpp node.cpp
	g++ -g -o string string.cpp expression.cpp list.cpp node.cpp

finalCommand: string.cpp expression.cpp list.cpp node.cpp
	g++ -o string string.cpp expression.cpp list.cpp node.cpp
