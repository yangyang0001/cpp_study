//
// Created by 杨建伟 on 2021/4/1.
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

class Time {

private:
    int hours;
    int minutes;

public:
    Time();
    Time(int m_hours, int m_minutes);
    void addHou(int hou);
    void addMin(int min);
    void reset(int m_hour = 0, int m_minute = 0);
    Time operator+(const Time & time);
    Time operator-(const Time & time);
    Time operator*(double n);
    void show() const;
};


#endif //CPP_STUDY_CPP_STUDY_0002_H
