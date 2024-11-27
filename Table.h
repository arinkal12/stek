#pragma once
#include <iostream>
#include <string>
#include <iostream>
#include <iomanip>
#include <optional>
template <typename T1, typename T2>

class Table
{
private:
    size_t _TableSize;
    std::optional<T1>* _col1;
    std::optional<T2>* _col2;
    size_t _count;

    std::string _title_col1 ;
    std::string _title_col2 ;

public:
    /// @brief конструктор класса , который на входе получает длину и название двух колонок 
    /// @param size 
    /// @param _title_col1 
    /// @param _title_col1 
    Table(std::string _title_col1, std::string _title_col2, size_t size = 20){
        
        _TableSize = size;
        _col1 = new std::optional<T1>[_TableSize];
        _col2= new std::optional<T2>[_TableSize];
        _count =0;

    }

    void AppendRow(T1 t1, T2 t2){
        //std::optional 
        _col1[_count] =t1;
        _col2[_count] = t2;
        // proverka na perepolnenie
        _count ++;

    }

    void Print() {//??????
        std::cout<<"\n";
        std::cout << _title_col1 << " | " << _title_col2 << std::endl;

        std::cout << std::setfill('-') << std::setw(8) << "" << std::endl;

        for(size_t i=0; i<17;i++){

        }

        for (size_t i = 0; i < _count; i++) {
            std::cout << std::setw(8) << _col1[i].value_or("empti") << " | " 
                      << std::setw(8)<< _col2[i] << std::endl;
        }
        
    }
    
};