#ifndef LIST_H
#define LIST_H

#include "node.h"

Node* parenInfixToAST(String pInfix){
    unsigned cursor = 0;
    Node* currentNode = new Node();

    for(cursor=0;cursor<pInfix.length;cursor++){
        switch(pInfix[cursor]){
            case '(':
                Node* n = new Node();
                if(currentNode.getLeftType()==aNothing)
                    current.setLeftExpression(n);
                else if(currentNode.getRightType()==aNothing)
                    current.setRightExpression(n);
                else
                    //Reaching this branch is an error. Please don't!
                current = n;
                break;
            case addition: case subtraction: 
            case multiplication: case division:
                current.setOp(pInfix[cursor]);
                break;
            //CASES STILL MISSING
            // *really? Ya think, do ya?
        }
    }
}
#endif //LIST_H
