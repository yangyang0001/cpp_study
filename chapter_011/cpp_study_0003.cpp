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

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);
    Time a = Time(1, 40);
    Time b = 1 * a;
    b.show();

    return 0;
}


