#include <iostream>
#include "Stack.h"
#include "correct.h"
int main(){
    std::string s = "(a+b)+(c+(b-d))";
    CorrectChecker cc;
    std::cout<<"proverka korrect skobok "<< cc.CheckerBrackets(s);




// Stack<int> array(4);
// array.Push(3);
// array.Push(5);
// array.Push(77);
// array.Push(4);

// std::cout << array.Check() <<std::endl;
// std::cout << array.Pop() <<std::endl;
// std::cout << array.IsEmpty() <<std::endl;
// try{
//     array.Pop();
// array.Pop();
// array.Pop();
// array.Pop();
// array.Pop();
// array.Pop();

// }
// catch (const char* error_message)
// {
//         std::cout << error_message << std::endl;
// }
// std::cout << "Dlina = " << array.GetLength()<<std::endl;

return 0;
}