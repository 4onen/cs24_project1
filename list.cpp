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
                currentNode = n;
                break;
            case '+': 
            case '-':
            case '*':
            case '/':
                currentNode->setOp(pInfix[cursor]);
                break;
            //CASES STILL MISSING
            // *really? Ya think, do ya?
        }
    }
}

