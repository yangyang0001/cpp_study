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

using namespace std;

#ifndef CPP_STUDY_CPP_STUDY_0011_01_NAMESPACE_H
#define CPP_STUDY_CPP_STUDY_0011_01_NAMESPACE_H

namespace pers {
    struct person {
        string fname;
        string lname;
    };

    void get_person(person &);
    void show_person(const person &);
}

namespace debts {
    using namespace pers;
    struct debt {
        person name;
        double amount;
    };

    void get_debt(debt &);
    void show_debt(debt &);
    double sum_debts(const debt arr[], int n);
}

#endif //CPP_STUDY_CPP_STUDY_0011_01_NAMESPACE_H
