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
}

StringBad::StringBad(const char * s) {
    len = strlen(s);
    str = new char[len + 1];
    strcpy(str, s);
    str[len] = '\0';
    num_strings ++;
}

StringBad::~StringBad() {
    num_strings --;
    delete[] str;
}

ostream & operator << (ostream & os, StringBad & stringBad) {
    os << stringBad.str;
    return os;
}


