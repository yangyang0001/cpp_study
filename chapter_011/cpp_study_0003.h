//
// Created by 杨建伟 on 2021/4/3.
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


#ifndef CPP_STUDY_CPP_STUDY_0003_H
#define CPP_STUDY_CPP_STUDY_0003_H

class Time {

private:
    int hours;
    int minutes;

public:
    Time();
    Time(int m_hours, int m_minutes);
    ~Time();

    void show();
    void reset(int m_hours, int m_minutes);
    Time operator + (const Time & time);
    Time operator - (const Time & time);
    Time operator * (int n);
    friend Time operator * (int n, const Time & time);

};

#endif //CPP_STUDY_CPP_STUDY_0003_H
