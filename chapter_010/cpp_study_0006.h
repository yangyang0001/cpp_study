//
// Created by 杨建伟 on 2021/3/26.
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

#ifndef CPP_STUDY_CPP_STUDY_0006_H
#define CPP_STUDY_CPP_STUDY_0006_H

class Stock {
    string company;
    long shares;
    double share_value;
    double total_value;

    void set_total() {
        total_value = shares * share_value;
    }

    // 无参构造函数
    public: Stock() {
        cout << "none param constructor invoked !" << endl;
        company = "NULL";
        shares = 0;
        share_value = 0;
        set_total();
    }

    // 有参构造函数
    public: Stock(const string & m_company, long m_shares, double m_share_value) {
        cout << "have param constructor invoked !" << endl;
        company = m_company;
        if(m_shares < 0) {
            shares = 0;
        } else {
            shares = m_shares;
        }
        if(m_share_value < 0) {
            share_value = 0;
        } else {
            share_value = m_share_value;
        }
        set_total();
    }

    // 析构函数
    ~ Stock(){
        // 析构函数解析!
        cout << "~Stock() invoked !" << endl;
    }

};

#endif //CPP_STUDY_CPP_STUDY_0006_H
