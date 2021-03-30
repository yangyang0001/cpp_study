//
// Created by 杨建伟 on 2021/3/30.
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

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    Time planning;
    Time coding(2, 40);
    Time fixing(5, 55);
    Time total;

    cout << "planning time = ";
    planning.show();

    cout << "coding   time = ";
    coding.show();

    cout << "fixing   time = ";
    fixing.show();

    total = coding.sum(fixing);
    cout << "total    time = ";
    total.show();

    // 重载+ 运算符
    cout << "operator + (const Time & target) running :" << endl;
    total = coding + fixing;
    total.show();

    Time a = Time(1, 20);
    Time b = Time(2, 21);
    Time c = Time(3, 22);
    // 这种方式的加法 注意加的顺序, 据书籍中介绍为: a + b + c => a + (b + c)
    Time result = a + b + c;


    return 0;
}


