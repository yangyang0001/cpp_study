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
# include "cpp_study_0007.h"

using namespace std;

Stock:: Stock() {
    cout << "0007_none param constructor invoked !" << endl;
    company = "DeepBlueGroup";
    shares = 0;
    share_value = 0;
    set_total();
}

Stock:: Stock(const string m_company, long m_shares, double m_share_value) {
    cout << "0007_have param constructor invoked !" << endl;
    company = m_company;
    shares = m_shares;
    share_value = m_share_value;
    set_total();
}

Stock:: ~ Stock() {
    cout << "0007_ ~ Stock() invoked, Bye " << company << endl;
}

void Stock:: set_company(const string m_company) {
    cout << "0007_set_company() invoked !" << endl;
    company = m_company;
}

void Stock:: set_shares(long m_shares) {
    cout << "0007_set_shares() invoked !" << endl;
    shares = m_shares;
}

void Stock:: set_share_value(double m_share_value) {
    cout << "0007_set_share_value() invoked !" << endl;
    share_value = m_share_value;
}

void Stock::show() const {
    cout << "company     = " << company
         << ", shares      = " << shares
         << ", share_value = " << share_value
         << ", total_value = " << total_value << endl;
}



