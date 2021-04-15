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

using namespace std;

#ifndef CPP_STUDY_CPP_STUDY_0002_H
#define CPP_STUDY_CPP_STUDY_0002_H

class String {
private:
    char * str;
    int len;
    static int num_strings;
    static int CINLIM;

public:
    String();
    String(const char * m_str);
    ~String();

    // 友元函数
    friend ostream & operator << (ostream & os, String & m_string);

    // 复制构造函数
    String(const String & m_string);

    // 赋值运算符
    String & operator = (const String & m_string);

    // 添加 operator < 成员函数
    bool operator < (const String & m_string);

    // 添加 operator > 成员函数
    bool operator > (const String & m_string);

    // 添加 operator == 成员函数
    bool operator == (const String & m_string);

    // 添加中括号运算符 operator [] 成员函数
    char & operator [] (int n);

    // 静态成员函数
    static int how_many_strings();

    // 运算符重载 operator >> 的使用
    friend istream & operator >> (istream & is, String & st);

};

#endif //CPP_STUDY_CPP_STUDY_0002_H
