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

using namespace std;

#ifndef CPP_STUDY_CPP_STUDY_0010_H
#define CPP_STUDY_CPP_STUDY_0010_H

class Stock {
    private: string company;
    private: long shares;
    private: double share_value;
    private: double total_value;

    // 构造函数 声明
    public: Stock();
    public: Stock(const string & m_company, long m_shares, double m_share_value);

    // 析构函数 声明
    ~ Stock();

    // 私有成员函数定义, 会被转换为 inline 函数
    private: void set_total() {
        total_value = shares * share_value;
    }

    // 共有成员函数 声明
    public: void set_company(const string & m_company);
    public: void set_shares(long m_shares);
    public: void set_share_value(double m_share_value);
    public: void show() const;

    // this 指针相关 新添加的方法
    public: double total() const;

    // 比较两只股票的 谁的股价 更高 function
    const Stock & get_stock_higher(const Stock & target) const;

};

#endif //CPP_STUDY_CPP_STUDY_0010_H
