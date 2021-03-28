//
// Created by 杨建伟 on 2021/3/28.
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

#ifndef CPP_STUDY_CPP_STUDY_0007_H
#define CPP_STUDY_CPP_STUDY_0007_H

class Stock {
    private: string company;
    private: long shares;
    private: double share_value;
    private: double total_value;

    private: void set_total() {
        total_value = shares * share_value;
    }

    public: Stock();
    public: Stock(const string m_company, long m_shares, double m_share_value);
    ~ Stock();

    public: void set_company(const string m_company);
    public: void set_shares(long m_shares);
    public: void set_share_value(double m_share_value);
    public: void show() const;  // const 函数声明, 同样定义也应该这样搞定义头 为: void Stock:: show() const {}
};

#endif //CPP_STUDY_CPP_STUDY_0007_H
