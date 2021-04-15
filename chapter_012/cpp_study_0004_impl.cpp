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
# include "cpp_study_0004.h"

using namespace std;

void Num::reset(int m_number) {
    this->number = m_number;
}

void Num::show(int m_number) {
    cout << m_number << endl;
}

ostream & operator << (ostream & os, const Num & num) {
    os << num.number << endl;
    return os;
}

const Num & mine_max(const Num & num1, const Num & num2) {
    if(num1.number > num2.number) {
        return num1;
    } else {
        return num2;
    }
}


