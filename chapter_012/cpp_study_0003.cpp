//
// Created by 杨建伟 on 2021/4/14.
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

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::boolalpha);

    char * aa = "111";
    char * bb = "123";
    cout << strcmp(aa, bb) << endl;
    cout << strcmp(bb, aa) << endl;

    String mm = String("1234");
    String nn = String("1000");

    bool flag_mm = mm < nn;
    bool flag_nn = mm > nn;
    cout << "falg_mm = " << flag_mm << endl;
    cout << "flag_nn = " << flag_nn << endl;

    return 0;
}


