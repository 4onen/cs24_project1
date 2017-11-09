#ifndef EXPRESSION_H
#define EXPRESSION_H

#include "list.h"

class expression{
    public:
        expression(string pInfix);
        expression(const expression &source);
        string infixString() const;
        string prefixString() const;
        string postfixString() const;
    private:
        Node* tree;
}

#endif //EXPRESSION_H
