#include "node.h"

;Op Node::getOpForChar(char opChar){
	switch(opChar){
    case '+': return Op::addition;
    case '-': return Op::subtraction;
    case '*': return Op::multiplication;
    case '/': return Op::division;
	}
	return Op::none;
}

void Node::setOp(Op newOp){
  operation = newOp;
}

bool Node::setOp(char newOpChar){
	Op newOp = getOpForChar(newOpChar);
  if(newOp!=Op::none){
    operation=newOp;
    return true;
  }else{
    return false;
  }
}

void Node::setLeftVariable(){
  leftType = aVariable;
}

void Node::setLeftConstant(int n){
	//Implementation here
}

void Node::setLeftExpression(Node* expression){
	//Implementation here
}

void Node::setRightVariable(){
	//Implementation here
}

void Node::setRightConstant(int n){
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

expEnum Node::getRightType(){
	//Implementation here
}
