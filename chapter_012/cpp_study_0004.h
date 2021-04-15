//
// Created by 杨建伟 on 2021/4/15.
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

#ifndef CPP_STUDY_CPP_STUDY_0004_H
#define CPP_STUDY_CPP_STUDY_0004_H

class Num {
private:
    int number;

public:
    void reset(int m_number);
    void show(int m_number);
    friend ostream & operator << (ostream & os, const Num & num);
    friend const Num & mine_max(const Num & num1, const Num & num2);
};

#endif //CPP_STUDY_CPP_STUDY_0004_H
