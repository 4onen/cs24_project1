#include "expression.h"

Expression::Expression(string pInfix){
    tree = parenInfixToAST(pInfix);
