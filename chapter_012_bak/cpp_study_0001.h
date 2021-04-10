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

using namespace std;

#ifndef CPP_STUDY_CPP_STUDY_0001_H
#define CPP_STUDY_CPP_STUDY_0001_H

class StringBad {
private:
    char * str;
    int len;
    static int num_strings;

public:
    StringBad();
    StringBad(const char * s);
    ~StringBad();
    friend ostream & operator << (ostream & os, StringBad & stringBad);

    // 隐式复制构造函数原型
    // StringBad(const StringBad & stirngBad);
};

#endif //CPP_STUDY_CPP_STUDY_0001_H
