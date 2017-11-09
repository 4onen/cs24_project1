#include "expression.h"

Expression::Expression(std::string pInfix){
    tree = parenInfixToAST(pInfix);
}

Expression::Expression(const Expression &source){
    tree = new Node(*source.tree);
}

std::string Expression::infixString() const{
    return tree->toInfix();
}

std::string Expression::prefixString() const{
    return tree->toPrefix();
}

std::string Expression::postfixString() const{
    return tree->toPostfix();
}
