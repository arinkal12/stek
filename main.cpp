#include <iostream>
#include "Stack.h"
#include "correct.h"
#include "Table.h"
#include <optional>


std::optional<std::string> create(bool b){
    if(b){
        return "GGG";
    }
    return std::nullopt;
}
int main(){

    // Table<std::string, double> array("per","per2",20);
    // // создали табличку 
    // array.AppendRow("a",5);
    // array.AppendRow("b",4.99);
    // array.AppendRow("per",5.01);
    // array.Print();


    std::string s = "(a+b)+c+b-d))";
    CorrectChecker cc;
    std::cout<<"proverka korrect skobok\n"<< cc.CheckerBrackets(s);
    



// лщззулт доделать 



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