#include "node.h"

Op Node::getOpForChar(char opChar){
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
    leftType = aConstant;
    leftConstant = n;
}

void Node::setLeftExpression(Node* expression){
    leftType = anExpression;
    if(left!=0) delete left;
    left = expression;
}

void Node::setRightVariable(){
    rightType = aVariable;
}

void Node::setRightConstant(int n){
    rightType = aConstant;
    rightConstant = n;
}

void Node::setRightExpression(Node* expression){
    rightType = anExpression;
    if(right!=0) delete right;
    right = expression;
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
