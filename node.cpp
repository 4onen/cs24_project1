#include "node.h"

static Op Node::getOpForChar(char opChar){
	switch(opChar){
		case '+': return addition;
		case '-': return subtraction;
		case '*': return multiplication;
		case '/': return division;
	}
	return none;
}

void Node::setOp(Op newOp){
	//Implementation here
}

bool Node::setOp(char newOpChar){
	//Implementation here
}

void Node::setLeftVariable(){
	//Implementation here
}

void Node::setLeftConstant(long long n){
	//Implementation here
}

void Node::setLeftExpression(Node* expression){
	//Implementation here
}

void Node::setRightVariable(){
	//Implementation here
}

void Node::setRightConstant(long long n){
	//Implementation here
}

void Node::setRightExpression(Node* expression){
	//Implementation here
}





Op Node::getOp(){
	//Implementation here
}

char Node::getOpChar(){
	//Implementation here
}

expEnum Node::getLeftType(){
	//Implementation here
}

expEnum Node::getLeftType(){
	//Implementation here
}
