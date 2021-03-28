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

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "Using constructor to create new objects :" << endl;
    Stock stock1("NanoSmart", 12, 20.0);
    stock1.show();
    cout << "1------------------------------------------------------------------------------------------------------" << endl;

    Stock stock2 = Stock("Boffo Objects", 2, 2.0);  // 这种方式可能创建 temp objects 也可能不创建, 编译器不同采用的方式不一样!
    stock2.show();
    cout << "2------------------------------------------------------------------------------------------------------" << endl;

    cout << "Assigning stock1 to stock2 :" << endl;
    stock2 = stock1;
    cout << "Listing stock1 and stock2 :" << endl;
    stock1.show();
    stock2.show();
    cout << "3------------------------------------------------------------------------------------------------------" << endl;

    cout << "Using a constructor to reset an object here:" << endl;
    stock1 = Stock("Nifty Foods", 10, 50.0);    // 这种方式一定会产生 temp objects 创建临时对象, 然后赋值给指定的对象!
    cout << "Revised stock1 :" << endl;
    stock1.show();
    cout << "Done" << endl;

    return 0;
}


