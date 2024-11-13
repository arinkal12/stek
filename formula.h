

#include "Stack.h"
#include <iostream>
#include <string>
class formula
{
private:
    string _expresion;
    Stack<string> _calcStack;
    string _postfix;
    
public:
    formula(string exp);
    bool CheckBrockets();
    bool CheckFormula();
    void EnterVariableVolnes(); //заставляет воодить пользотавеля знаечни яперменных выражения
    string BuildPostfix();
    double Calculate();

    
};


