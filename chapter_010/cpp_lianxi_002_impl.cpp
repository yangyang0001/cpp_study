//
// Created by 杨建伟 on 2021/3/30.
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
# include "cpp_lianxi_002.h"

using namespace std;

BankAccount:: BankAccount() {
    this->username = "Yang";
    this->accountNo = "18765829080";
    this->balance = 0;
}

BankAccount:: BankAccount(const string & m_username, const string & m_accountNo, double m_balance) {
    this->username = m_username;
    this->accountNo = m_accountNo;
    this->balance = m_balance;
}

BankAccount:: ~ BankAccount() {
    cout << "~BankAccount() invoked"
         << ", username = " << this->username
         << ", accountNo = " << this->accountNo
         << ", balance = " << this->balance << endl;
}

// 共有方法声明
void BankAccount:: show() const {
    cout << "username = " << this->username << ", accountNo = " << this->accountNo << ", balance = " << this->balance << endl;
}

void BankAccount:: set_balance(double m_balance) {
    if(m_balance > 0) {
        balance = m_balance;
    } else {
        balance = 0;
    }
}

void BankAccount:: withdrawal(double m_balance) {
    if(this->balance >= m_balance) {
        this->balance -= m_balance;
    } else {
        cout << "this.balance < m_balance withdrawal error !" << endl;
    }
}



