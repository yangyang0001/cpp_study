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

using namespace std;

#ifndef CPP_STUDY_CPP_STUDY_0001_STOCK_H
#define CPP_STUDY_CPP_STUDY_0001_STOCK_H

class Stock {

    private: string company;
    private: long shares;
    private: double share_value;
    private: double total_value;

    private: void set_total() {
        total_value = shares * share_value;
    }

    public: void acquire(const string & company, long num, double price);
    public: void buy(long num, double price);
    public: void sell(long num, double price);
    public: void update(double price);
    public: void show();

};

template <typename T> void mine_show(T &);  // 泛化   方法模板
template <> void mine_show<Stock>(Stock &); // 具体化 方法模板, 依托于 泛化方法模板创建, 否则报错!

#endif //CPP_STUDY_CPP_STUDY_0001_STOCK_H
