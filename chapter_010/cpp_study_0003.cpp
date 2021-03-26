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
# include "cpp_study_0003.h"


using namespace std;

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    Person person0;
    person0.set_name("zhangsan");
    person0.set_pass("123456");
    person0.show_person();

    cout << "----------------------------------------------------------------------------------" << endl;

    Person * person1 = new Person("lisi", "123456");
    person1->show_person();

    return 0;
}


