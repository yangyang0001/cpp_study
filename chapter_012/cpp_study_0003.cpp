//
// Created by 杨建伟 on 2021/4/14.
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
# include "cpp_study_0002.h"

using namespace std;

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout.setf(ios_base::boolalpha);

    char * aa = new char[5];
    strcpy(aa, "1111");
    aa[5] = '\0';

    char * bb = new char[5];
    strcpy(bb, "2222");
    aa[5] = '\0';

    cout << "strcmp(aa, bb) = " << strcmp(aa, bb) << endl;
    cout << "strcmp(bb, aa) = " << strcmp(bb, aa) << endl;

    String mm = String("1234");
    String nn = String("0000");

    bool flag_mm = mm < nn;
    bool flag_nn = mm > nn;

    cout << "falg_mm = " << flag_mm << endl;
    cout << "flag_nn = " << flag_nn << endl;

    String pp = String("abc");
    String qq = String("abcd");
    bool flag_pq = pp == qq;
    cout << "flag_pq = " << flag_pq << endl;

    return 0;
}


