//
// Created by 杨建伟 on 2021/4/5.
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

using namespace std;

// 在 header 文件中, 使用的静态变量的初始化
int StringBad::num_strings = 0;

StringBad::StringBad() {
    this->length = 3;
    this->str = new char[4];
    strcpy(str, "C++");
    str[length] = '\0';
    num_strings ++;
    cout << "none param constructor invoked, str = " << this->str << ", length = " << this->length << ", number_strings = " << this->num_strings << endl;
}

StringBad::StringBad(const char * s) {
    this->length = strlen(s);
    this->str = new char[this->length + 1];
    strcpy(str, s);
    str[length] = '\0';
    num_strings ++;
    cout << "have param constructor invoked, str = " << this->str << ", length = " << this->length << ", number_strings = " << this->num_strings << endl;
}

StringBad::~StringBad() {
    num_strings --;
    cout << "destructor ~StringBad() invoked, str = " << this->str << ", length = " << this->length << ", number_strings = " << this->num_strings << endl;
    delete[] this->str;
}

ostream & operator << (ostream & os, const StringBad & stringBad) {
    os << stringBad.str;
    return os;
}