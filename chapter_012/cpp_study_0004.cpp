//
// Created by 杨建伟 on 2021/4/15.
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
# include "cpp_study_0004.h"

using namespace std;

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    Num num1, num2;
    num1.reset(1);
    num2.reset(200);

    const Num & result = mine_max(num1, num2);
    cout << result << endl;
    return 0;
}


