//
// Created by 杨建伟 on 2021/3/25.
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
# include "cpp_study_0001_stock.h"

using namespace std;

// 赋值操作
void Stock:: acquire(const string & com, long num, double price) {
     company = com;
    if(num < 0) {
        shares = 0;
    } else {
        shares = num;
    };
    share_value = price;
    set_total();
}

void Stock:: buy(long num, double price) {
    if(num < 0) {
        cout << "buy function invoked the num < 0, num = " << num << endl;
    } else {
        shares += num;
        share_value = price;
        set_total();
    }
}

void Stock:: sell(long num, double price) {
    if(num < 0) {
        cout << "sell function invoked num < 0, num = " << num << endl;
    } else if(num > shares) {
        cout << "sell function invoked num > shares, num = " << num << ", shares = " << shares << endl;
    } else {
        shares -= num;
        share_value = price;
        set_total();
    }
}

void Stock:: update(double price) {
    share_value = price;
    set_total();
}

void Stock:: show() {
    cout.setf(ios_base:: fixed, ios_base:: floatfield);
    cout.precision(3);

    cout << "company     = " << company << endl;
    cout << "shares      = " << shares << endl;
    cout << "share_value = " << share_value << endl;
    cout << "total_value = " << total_value  << endl;
}

template <typename T> void mine_show (T & obj) {
    cout << "mine_show generic template instance invokded"  << endl;
}

template<> void mine_show<Stock>(Stock & stock) {
    cout << "mine_show concrete template instance invoked" << endl;
    stock.show();
}




