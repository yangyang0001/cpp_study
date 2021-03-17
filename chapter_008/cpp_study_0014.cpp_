//
// Created by 杨建伟 on 2021/3/17.
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

const long left(const long num, int left = 1);
char * left(const char * str, int left = 1);

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    long num = 12345678;
    char * str = "Hawaii!!";

    int left_long = 5;
    long left_num = left(num, left_long);
    int left_char = 13;
    char * left_str = left(str, left_char);

    cout << "num = " << num << ", left = " << left_long << ", left_num = " << left_num << endl;
    cout << "str = " << str << ", left = " << left_char << ", left_str = " << left_str << endl;

    delete[] left_str;
    return 0;
}

const long left(const long num, int left) {
    if(left <= 0) {
        left = 1;
    }

    // 计算总位数
    long n = num;
    long digits = 1;
    while(n/=10) {
        digits++;
    }

    // 总位数-左边截取位数 = 剩余位数
    long base = digits - left;
    if(base <= 0) {
        return num;
    }

    cout << "n = " << num  << ",  digits = " << digits << endl;
    cout << "base = " << base << ",  pow(10, base) = " << pow(10, base) << endl;

    return num / pow(10, base);
}

char * left(const char * str, int left) {
    left = left > strlen(str) ? strlen(str) : left;
    char * res = new char[left+1];

    for(int i = 0; i < left && str[i]; i++) {
        res[i] = str[i];
    }
    res[left] = '\0';

    return res;
}


