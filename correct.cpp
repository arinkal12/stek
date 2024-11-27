#include "correct.h"
#include "Table.h"
#include <optional>

bool CorrectChecker::CheckerBrackets(const std::string& s){
    Table<std::optional<int>,std::optional<int>> table("(",")", 20);
    for(size_t i=0;i<s.size(); i++){
        if(s[i] == '('){
            _brackets.Push(i);
        }
        if(s[i] == ')'){
            try{
                table1.AppendRow(_brackets.Pop(),i);

            }
            catch (const char* error_message)
            {
                table1.AppendRow(-1,i);
                table1.Print();
                std::cout << "EROR _brackets " << std::endl;
                return false;
            }
        }

    }
    table1.Print();
    return _brackets.IsEmpty();
}