//
// Created by 杨建伟 on 2021/3/16.
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

/**
 * 函数重载的问题
 * 注意: 类型变量和类型引用 编译器视为一种 function signature, 函数特征标识一定要唯一
 * @return
 */

void print(const char * str, int width);
void print(double d, int width);
void print(long l,int width);
void print(int i, int width);
void print(const char * str);

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

//    unsigned int year = 5;
//    print(year, 5);




    return 0;
}


