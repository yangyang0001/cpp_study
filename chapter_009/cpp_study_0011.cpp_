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
using namespace pers;
using namespace debts;

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    person person_one;
    get_person(person_one);
    show_person(person_one);

    debt debt_one;
    get_debt(debt_one);
    show_debt(debt_one);

    const debt arr[1] = {debt_one};
    double sum = sum_debts(arr, 1);
    cout << "sum = " << sum << endl;

    return 0;
}


