//
// Created by 杨建伟 on 2021/3/19.
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

/**
 * 三种静态存储变量
 * 1、无链接性   静态变量     代码块内部 且 用static修饰
 * 2、内部链接性 静态变量     不在任何函数内 且 用static 修饰
 * 3、外部连接性 静态变量     不在任何函数内
 */
using namespace std;

int global = 1000;          // 外链静态变量   必须在代码块外部声明
static int one_file = 50;   // 内链静态变量   必须在代码块外部声明 且 用static 修饰

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);




    return 0;
}

void function1(int n) {
    static int count = 0;   // 无链静态变量 必须在代码块内部声明 且 用static修饰
    int llama = 0;
}

void function2() {

}


