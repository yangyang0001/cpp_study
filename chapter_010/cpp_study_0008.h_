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

#ifndef CPP_STUDY_CPP_STUDY_0008_H
#define CPP_STUDY_CPP_STUDY_0008_H

class Stock {
    private: string company;
    private: long shares;
    private: double share_value;
    private: double total_value;

    // 当前方法会 默认转换成 内联函数 inline函数
    private: void set_total() {
        total_value = shares * share_value;
    }

    // 构造函数 和 析构函数  defined
    public: Stock();
    public: Stock(const string m_company, long m_shares, double m_share_value);
    ~ Stock();

    // 常量方法 defined
    public: void show() const;

    // 公共成员函数 defined
    public: void set_company(const string m_company);
    public: void set_shares(long m_shares);
    public: void set_share_value(double m_share_value);

};


#endif //CPP_STUDY_CPP_STUDY_0008_H
