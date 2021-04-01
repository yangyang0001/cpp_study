//
// Created by 杨建伟 on 2021/4/2.
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
# include "cpp_study_0003.h"

using namespace std;

Time:: Time() {
    this->hours = 0;
    this->minutes = 0;
}

Time:: Time(int m_hours, int m_minutes) {
    this->hours = m_hours;
    this->minutes = m_minutes;
}

Time:: ~Time() {
    cout << "destrcutor ~Time() invoked !" << endl;
}

void Time:: reset(int m_hours, int m_minutes) {
    this->hours = m_hours;
    this->minutes = m_minutes;
}

void Time:: show() {
    cout << "hours = " << this->hours << ", minutes = " << this->minutes << endl;
}

Time Time:: operator *(int n) {
    Time result;
    int res_hou = (this->hours * 60 + this->minutes) * n / 60;
    int res_min = (this->hours * 60 + this->minutes) * n % 60;
    result.reset(res_hou, res_min);
    return result;
}

Time operator * (int n, const Time & time) {
    Time result;
    int res_hou = (time.hours * 60 + time.minutes) * n / 60;
    int res_min = (time.hours * 60 + time.minutes) * n % 60;
    result.reset(res_hou, res_min);
    return result;
}


