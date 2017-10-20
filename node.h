#ifndef NODE_H
#define NODE_H

enum class Op:char {addition='+',subtraction='-',multiplication='*',division='/',none='N'};


enum expEnum {anExpression,aVariable,aNumber,aNothing};


class Node {
	Op operation;
	expEnum leftType;
  Node* left;
  int leftConstant;
	expEnum rightType;
	Node* right;
  int rightConstant;

    public:
  Node(): 
		operation(Op::none),
		leftType(aNothing),left(0),leftConstant(-1),
		rightType(aNothing),right(0),rightConstant(-1){}

	Node(const Node& n){
		operation = n.operation;
		leftType = n.leftType;
		left = n.left;
    leftConstant = n.leftConstant;
		rightType = n.rightType;
		right = n.right;
    rightConstant = n.rightConstant;
	}

	static Op getOpForChar(char opChar);

	void setOp(Op newOp);
	bool setOp(char newOpChar);
	void setLeftVariable();
	void setLeftConstant(int n);
	void setLeftExpression(Node* expression);
	void setRightVariable();
	void setRightConstant(int n);
	void setRightExpression(Node* expression);

	Op getOp();
	char getOpChar();
	expEnum getLeftType();
	expEnum getRightType();
  
  int getLeftConstant();
  Node* getLeftExpression();
  int getRightConstant();
  Node* getRightExpression();
}

#endif //NODE_H
