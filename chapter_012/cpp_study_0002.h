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


};

#endif //CPP_STUDY_CPP_STUDY_0002_H
