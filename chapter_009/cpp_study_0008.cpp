//
// Created by 杨建伟 on 2021/3/22.
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
struct where {
    double x;
    double y;
    double z;
};

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    // 1、使用new 初始化
    where * one = new where {2.5, 5.3, 7.2};
    int * ar = new int[2] {100, 102};

    return 0;
}


