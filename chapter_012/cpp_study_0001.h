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

using namespace std;

#ifndef CPP_STUDY_CPP_STUDY_0001_H
#define CPP_STUDY_CPP_STUDY_0001_H

class StringBad {
private:
    char * str;
    int length;
    static int num_strings;

public:
    StringBad();
    StringBad(const char * s);
    ~StringBad();
    friend ostream & operator << (ostream & os, const StringBad & stringBad);
};

#endif //CPP_STUDY_CPP_STUDY_0001_H
