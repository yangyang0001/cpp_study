//
// Created by 杨建伟 on 2021/4/19.
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

using namespace std;

PingPangPlayer::PingPangPlayer(const string & fn, const string & ln, bool ht) {
    this->first_name = fn;
    this->last_name  = ln;
    this->has_table  = ht;
}

void PingPangPlayer::name() const {
    cout << "first_name :" << this->first_name << ", last_name :" << this->last_name << endl;
}

