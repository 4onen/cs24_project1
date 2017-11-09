#include "expression.h"

Expression::Expression(string pInfix){
    tree = parenInfixToAST(pInfix);
}

Expression::Expression(const Expression &source){
    tree = new Node(source.tree);
}

string Expression::infixString() const{
    return tree->toInfix();
}

string Expression::prefixString() const{
    return tree->toPrefix();
}

string Expression::postfixString() const{
    return tree->toPostfix();
}
