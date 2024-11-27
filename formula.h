

#include "Stack.h"
#include <iostream>
#include <string>
#include "Table.h"
using namespace std;


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
/*реализуем подсчет и пофстфикную форму 
таблица преоритета операций и 2 таблцица с переменными и их значением 
( ) * / - + * 0 1 2 3 4 5/
    
};


