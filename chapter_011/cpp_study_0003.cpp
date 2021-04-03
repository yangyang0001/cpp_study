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
# include "cpp_study_0003.h"

using namespace std;

/**
 * TODO 局部方法内的 对象回收 和 分析有出入, 存疑！
 * @return
 */
int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);
    Time first = Time(1, 30); // 6 
    Time secnd = Time(2, 45); // 5

    Time sum = first + secnd;
    // a operator + (const Time & time) 函数内部的自动存储变量sum 方法执行完成后 自动执行析构函数 释放stack内存
    sum.show();
    // 4 sum属于main方法中的自动存储变量, 在main方法执行完成后 执行析构函数
    cout << "1 ----------------------------------------------------------------------------------" << endl;

    Time sub = first - secnd;
    // b operator - (const Time & time) 函数内部的自动存储变量sub 方法执行完成后 自动执行析构函数 释放stack内存
    sub.show();
    // 3 sub属于main方法中的自动存储变量, 在main方法执行完成后 执行析构函数
    cout << "2 ----------------------------------------------------------------------------------" << endl;

    Time pro0 = first * 2;
    // c operator * (const Time & time) 函数内部的自动存储变量pro 方法执行完成后 自动执行析构函数 释放stack内存
    pro0.show();
    // 2 pro0属于main方法中的自动存储变量, 在main方法执行完成后 执行析构函数
    cout << "3 ----------------------------------------------------------------------------------" << endl;

    Time pro1 = 2 * secnd;
    // d operator * (const Time & time) 函数内部的自动存储变量pro 方法执行完成后 自动执行析构函数 释放stack内存
    pro1.show();
    // 1 pro属于main方法中的自动存储变量, 在main方法执行完成后 执行析构函数
    cout << "4 ----------------------------------------------------------------------------------" << endl;
    // 析构函数执行 1 2 3 4 5 6

    return 0;
}


