//
// Created by 杨建伟 on 2021/4/10.
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
# include "cpp_study_0001.h"

int StringBad::num_strings = 0;

using namespace std;

StringBad::StringBad() {
    len = 3;
    str = new char[len + 1];
    strcpy(str, "C++");
    str[len] = '\0';
    num_strings ++;
    cout << "none param constructor invoked, str = " << this->str << ", len = " << this->len << ", num_strings = " << num_strings << endl;
}

StringBad::StringBad(const char * s) {
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    str[len] = '\0';
    num_strings ++;
    cout << "have param constructor invoked, str = " << this->str << ", len = " << this->len << ", num_strings = " << num_strings << endl;
}

StringBad::~StringBad() {
    num_strings --;
    delete[] str;
    cout << "~StringBad() destructor invoked, str = " << this->str << ", len = " << this->len << ", num_strings = " << num_strings << endl;
}

ostream & operator << (ostream & os, StringBad & stringBad) {
    os << stringBad.str;
    return os;
}

// 新概念: 隐式复制构造函数 显式化定义
StringBad::StringBad(const StringBad & stringBad) {
    len = stringBad.len;
    str = new char[len + 1];
    strcpy(str, stringBad.str);
    str[len] = '0';
    num_strings ++;
    cout << "assignment constructor invoked, str = " << this->str << ", len = " << this->len << ", num_strings = " << num_strings << endl;
}

// 新概念: 默认赋值运算符 显式化定义
StringBad & StringBad:: operator = (const StringBad & stringBad) {
    // 赋值不能自己赋值给自己
    if(this == & stringBad) {
        return * this;
    }

    // 先释放掉当前调用者的动态内存
    cout << "before assignment operator = invoked, str = " << this->str << ", len = " << this->len << ", num_strings = " << num_strings << endl;
    delete[] str;
    num_strings --;

    // 让当前的调用对象 指向新的内存空间
    len = stringBad.len;
    str = new char[len + 1];
    strcpy(str, stringBad.str);
    str[len] = '0';
    num_strings ++;
    cout << "after assignment operator = invoked, str = " << this->str << ", len = " << this->len << ", num_strings = " << num_strings << endl;

    return * this;
};






