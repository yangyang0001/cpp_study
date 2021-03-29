//
// Created by 杨建伟 on 2021/3/29.
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
# include "cpp_study_0011.h"

using namespace std;

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    IK * pik = new IK(10);
    pik->show();

    cout << "------------------------------------------------------------------------------------------------------" << endl;

    IK ee = IK(100);
    ee.show();

    return 0;
}


