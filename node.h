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
    Node* parent;
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

    Node(const Node& n, bool copyParent=false, Node* newParent=0);

	static Op getOpForChar(char opChar);
    
    void setParent(Node* newParent);
	void setOp(Op newOp);
	bool setOp(char newOpChar);
	void setLeftVariable();
	void setLeftConstant(int n);
	void setLeftExpression(Node* expression);
	void setRightVariable();
	void setRightConstant(int n);
	void setRightExpression(Node* expression);

    Node* getParent();
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
