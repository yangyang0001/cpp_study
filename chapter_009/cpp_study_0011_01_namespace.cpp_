//
// Created by 杨建伟 on 2021/3/24.
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
# include "cpp_study_0011_01_namespace.h"

using namespace std;

namespace pers {
    void get_person(person & person) {
        person.fname = "zhang";
        person.lname = "san";
    }

    void show_person(const person & person) {
        cout << "person.fname = " << person.fname << endl;
        cout << "person.lname = " << person.lname << endl;
    }
}

namespace debts {

    void get_debt(debt & debt) {
        debt.name = {"zhang", "san"};
        debt.amount = 100.5;
    }

    void show_debt(debt & debt) {
        cout << "debt.name.fname = " << debt.name.fname << endl;
        cout << "debt.name.lname = " << debt.name.lname << endl;
        cout << "debt.amount     = " << debt.amount     << endl;
    }

    double sum_debts(const debt arr[], int n) {
        double sum = 0;
        for(int i = 0; i < n; i++) {
            sum += arr[i].amount;
        }
        return sum;
    }

}





