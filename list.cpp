#include "list.h"

Node* parenInfixToAST(std::string pInfix){
    unsigned cursor = 0;
    Node* currentNode = new Node();
    Node* n;

    for(cursor=0;cursor<pInfix.length();cursor++){
        switch(pInfix[cursor]){
            case '(':
                new Node();
                if(currentNode->getLeftType()==aNothing)
                    currentNode->setLeftExpression(n);
                else if(currentNode->getRightType()==aNothing)
                    currentNode->setRightExpression(n);
                else
                    //Reaching this branch is an error. Please don't!
                    return 0;
                currentNode = n;
                break;
            case '+': 
            case '-':
            case '*':
            case '/':
                currentNode->setOp(pInfix[cursor]);
                break;
            case 'x': case 'X':
                if(currentNode->getLeftType()==aNothing)
                    currentNode->setLeftVariable();
                else if(currentNode->getRightType()==aNothing)
                    currentNode->setRightVariable();
                else
                    //Reaching this branch is an error. Please don't!
                    return 0;
                break;
            case '0': case '1': case '2': case '3': case '4':
            case '5': case '6': case '7': case '8': case '9':
                if(currentNode->getLeftType()==aNothing)
                    currentNode->setLeftConstant(atoi(pInfix.c_str()+cursor));
                else if(currentNode->getRightType()==aNothing)
                    currentNode->setRightConstant(atoi(pInfix.c_str()+cursor));
                else
                    //Reaching this branch is an error. Please don't!
                    return 0;
                while(pInfix[cursor]<='9'&&pInfix[cursor]>='0'){
                    cursor++;
                }
                break;
            case ')':
                currentNode=currentNode->parent;
        }
    }
}

