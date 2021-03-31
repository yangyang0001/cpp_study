//
// Created by 杨建伟 on 2021/3/30.
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

// 此处规范 class 的声明和定义的方式
class Time {
    public:
        int hours;
        int minutes;

    public:
        Time();
        Time(int m_hours, int m_minutes);
        void addHou(int hou);
        void addMin(int min);
        void reset(int m_hours = 0, int m_minutes = 0);
        Time sum(const Time & target);
        void show() const;
        // 重载操作运算符
        Time operator+(const Time & target);
};

#endif //CPP_STUDY_CPP_STUDY_0001_H
