//
// Created by 杨建伟 on 2021/3/26.
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

void Person::set_name(string param_name) {
    name = param_name;
}

void Person::set_pass(string param_pass) {
    pass = param_pass;
}

string Person::get_name() {
    return name;
}

string Person::get_pass() {
    return pass;
}


