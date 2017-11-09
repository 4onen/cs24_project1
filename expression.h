#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "list.h"

class Expression{
    public:
        Expression(string pInfix);
        Expression(const expression &source);
        string infixString() const;
        string prefixString() const;
        string postfixString() const;
    private:
        Node* tree;
}

#endif //EXPRESSION_H
