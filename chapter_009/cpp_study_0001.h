//
// Created by 杨建伟 on 2021/3/18.
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

struct person {
    string username;
    string password;
    int gender;
    int age;
};

void show_person(person & p);
#endif //CPP_STUDY_CPP_STUDY_0001_H
