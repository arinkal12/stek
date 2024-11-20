#pragma once
#include "Stack.h"

class CorrectChecker
{
private:
    Stack<int> _brackets; // ()


public:
    bool CheckerBrackets(const std::string& s);


    
};


