#include "correct.h"
#include "Table.h"
bool CorrectChecker::CheckerBrackets(const std::string& s){
    Table<int,int>table1;
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
                std::cout << "EROR _brackets " << std::endl;
            }
        }

    }
    table1.Print();
    return _brackets.IsEmpty();
}