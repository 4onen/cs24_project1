#ifndef NODE_H
#define NODE_H

enum Op {addition,subtraction,multiplication,division,none};


enum expEnum {anExpression,aVariable,aNumber,aNothing};

union expression {
	Node* exp;
	long long number;
}

class Node {
	Op operation;
	expEnum leftType;
	expression left;
	expEnum rightType;
	expression right;

    public:
        Node(): 
		operation(none),
		leftType(aNothing),left(-1),
		rightType(aNothing),right(-1){}
	Node(Node n){
		operation = node.operation;
		leftType = node.leftType;
		left = node.left;
		rightType = node.rightType;
		right = node.right;
	}

	static Op getOpForChar(char opChar);

	void setOp(Op newOp);
	bool setOp(char newOpChar);
	void setLeftVariable();
	void setLeftConstant(long long n);
	void setLeftExpression(Node* expression);
	void setRightVariable();
	void setRightConstant(long long n);
	void setRightExpression(Node* expression);

	Op getOp();
	char getOpChar();
	expEnum getLeftType();
	expEnum getRightType();
	expression getLeft();
	expression getRight();
}

#endif //NODE_H
