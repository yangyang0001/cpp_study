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
# include "cpp_study_0002.h"

using namespace std;

Time:: Time() {
    this->hours = 0;
    this->minutes = 0;
}

Time:: Time(int m_hours, int m_minutes) {
    this->hours = m_hours;
    this->minutes = m_minutes;
}

void Time:: addHou(int hou) {
    this->hours += hou;
}

void Time:: addMin(int min) {
    this->minutes += min;
    this->hours += this->minutes / 60;
}

void Time:: reset(int m_hour, int m_minute) {
    this->hours = m_hour;
    this->minutes = m_minute;
}

Time Time:: operator+(const Time & time) {
    Time sum;
    int sum_min = (this->minutes + time.minutes) % 60;
    int sum_hou = this->hours + time.hours + (this->minutes + time.minutes) / 60;
    sum.reset(sum_hou, sum_min);

    return sum;
}

Time Time:: operator-(const Time & time) {
    Time sub;
    int this_mins = this->hours * 60 + this->minutes;
    int time_mins = time.hours * 60 + time.minutes;
    int sub_mins = abs(this_mins - time_mins);
    int sub_hou = sub_mins / 60;
    int sub_min = sub_mins % 60;
    sub.reset(sub_hou, sub_min);

    return sub;
}

Time Time:: operator*(double n) {
    Time result;
    double all_mins = (this->hours * 60 + this->minutes) * n;
    int res_hou  = (int) all_mins / 60;
    int res_min  = (int) all_mins % 60;
    result.reset(res_hou, res_min);

    return result;
}

void Time:: show() const {
    cout << "hours = " << this->hours << ", minutes = " << this->minutes << endl;
}


