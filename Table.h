#pragma once
#include <iostream>
#include <string>

template <typename T1, typename T2>
class Table
{
private:
    size_t _TableSize;
    T1* _col1;
    T2* _col2;
    size_t _count;

public:
    Table(size_t size = 20){
        _TableSize = size;
        _col1 = new T1[_TableSize];
        _col2= new T2[_TableSize];
        _count =0;

    }

    void AppendRow(T1 t1, T2 t2){
        //std::optional 
        _col1[_count] =t1;
        _col2[_count] = t2;
        // proverka na perepolnenie
        _count ++;

    }

    void Print(){
        for(size_t i =0; i <_count; i++){
            std::cout<<_col1[i]<< " "<< _col2[i]<< std::endl;
        }
    }
    
};