#include "node.h"


Node(const Node& n, bool copyParent=false, Node* newParent=0){
    if(copyParent){
        parent = n.parent;
    }else{
        parent = newParent;
    }

    operation = n.operation;
    switch(leftType=n.leftType){
        case aConstant:
            leftConstant=n.leftConstant;
            break;
        case anExpression:
            left = new Node(*n.left,false,this);
            break;
    }
    switch(rightType=n.rightType){
        case aConstant:
            rightConstant=n.rightConstant;
            break;
        case anExpression:
            right = new Node(*n.right,false,this);
            break;
    }
}







Op Node::getOpForChar(char opChar){
	switch(opChar){
    case '+': return Op::addition;
    case '-': return Op::subtraction;
    case '*': return Op::multiplication;
    case '/': return Op::division;
	}
	return Op::none;
}

void Node::setParent(Node* newParent){
    parent = newParent;
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
    right = expression;
}



Node* Node::getParent(){
    return parent;
}

Op Node::getOp(){
    return operation;
}

char Node::getOpChar(){
    return static_cast<char>(operation);
}

expEnum Node::getLeftType(){
    return leftType;
}

expEnum Node::getRightType(){
    return rightType;
}
