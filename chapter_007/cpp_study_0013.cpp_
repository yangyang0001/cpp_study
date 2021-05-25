//
// Created by 杨建伟 on 2021/5/25.
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

double mine_sum(double x, double y);

double mine_call_fun_point(int a, double (*pf) (double x, double y));

int mine_fun_a(int a);

void call_mine_fun_a(int a, int (*pf) (int a));

/**
 * 使用函数指针的观念在于  如果书写某些函数的指针原型, 使用函数指针非常调用函数 非常方便, 但是书写函数指针原型是一件不容易的事情!
 * 例如本例题中 mine_call_fun_point() 中的第二个参数就是 第一个函数mine_sum() 的指针原型
 * @return
 */
int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    double value = mine_call_fun_point(10, mine_sum);
    cout << "value = " << value << endl;

    call_mine_fun_a(10, mine_fun_a);
    return 0;
}

double mine_sum (double x, double y) {
    return x + y;
}


double mine_call_fun_point(int a, double (*pf) (double x, double y)) {
    return a + pf(1, 2);
}


int mine_fun_a(int a) {
    return a;
}

void call_mine_fun_a(int a, int (*pf) (int a)) {
    int value = a + pf(10);
    cout << "call_mine_fun_a value = " << value << endl;
}
