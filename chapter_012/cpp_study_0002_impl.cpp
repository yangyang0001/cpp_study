//
// Created by 杨建伟 on 2021/4/13.
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
# include "cpp_study_0002.h"

using namespace std;

int String::num_strings = 0;

String::String() {
    len = 0;
    str = new char[1];
    str[0] = '\0';
    num_strings ++;
    cout << "none param constructor invoked, str = " << str << ", len = " << len << ", num_strings = " << num_strings << endl;
}

String::String(const char * m_str) {
    len = strlen(m_str);
    str = new char[len + 1];
    strcpy(str, m_str);
    str[len] = '\0';
    num_strings ++;
}

String::~String() {
    num_strings--;
    cout << "destructor invoked, str = " << str << ", len = " << len << ", num_strings = " << num_strings << endl;
    delete[] str;
}

ostream & operator << (ostream & os, String & m_string) {
    os << m_string.str;
    return os;
}

// 新概念: 复制构造函数
String::String(const String & m_string) {
    len = strlen(m_string.str);
    str = new char[len + 1];
    strcpy(str, m_string.str);
    str[len] = '\0';
    num_strings ++;
    cout << "copy constructor invoked, str = " << str << ", len = " << len << ", num_strings = " << num_strings << endl;
}

// 新概念: 赋值运算符
String & String::operator = (const String & m_string) {
    if(this == & m_string) {
        return * this;
    }

    num_strings --;
    cout << "before String & String::operator = invoked, str = " << str << ", len = " << len << ", num_strings = " << num_strings << endl;
    delete[] str;

    len = strlen(m_string.str);
    str = new char[len + 1];
    strcpy(str, m_string.str);
    str[len] = '\0';
    num_strings ++;
    cout << "after  String & String::operator = invoked, str = " << str << ", len = " << len << ", num_strings = " << num_strings << endl;

    return * this;
}



