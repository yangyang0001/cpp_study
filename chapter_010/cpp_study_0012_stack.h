//
// Created by 杨建伟 on 2021/3/29.
//

# include <iostream>
# include <climits>
# include <string>
# include <cstring>
# include <vector>
# include <array>
# include <ctime>
# include <cctype>
# include <cmath>
# include <fstream>

using namespace std;

#ifndef CPP_STUDY_CPP_STUDY_0012_STACK_H
#define CPP_STUDY_CPP_STUDY_0012_STACK_H

typedef unsigned long Item;

class Stack {

    private: enum {MAX = 10};
    private: Item item[MAX];
    private: int top;

    public: void push(const Item & item);
    public: void pop(Item & item);
    public: bool is_empty() const;
    public: bool is_full() const;

};


#endif //CPP_STUDY_CPP_STUDY_0012_STACK_H
