#ifndef NODE_H
#define NODE_H

enum class Op:char
    {addition='+'
    ,subtraction='-'
    ,multiplication='*'
    ,division='/'
    ,none='N'
    };

enum expEnum
    {anExpression
    ,aVariable
    ,aConstant
    ,aNothing
    };


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
        switch(leftType=n.leftType){
            case aConstant:
                leftConstant=n.leftConstant;
                break;
            case anExpression:
                left = new Node(*n.left);
                break;
        }
        switch(rightType=n.rightType){
            case aConstant:
                rightConstant=n.rightConstant;
                break;
            case anExpression:
                right = new Node(*n.right);
                break;
        }
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
};

#endif //NODE_H
