//
// Created by 杨建伟 on 2021/4/10.
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
# include "cpp_study_0001.h"

using namespace std;

void callme1(StringBad & stringBad);
void callme2(StringBad stringBad);

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);
    {
        cout << "Starting inner block!" << endl;            //
        StringBad headline1("Celery Stalks at Midnight");   // 显式构造函数   +1  num_strings = 1
        StringBad headline2("Lettuce Prey");                // 显式构造函数   +1  num_strings = 2
        StringBad sports("Spinach Leaves Bowl for Dollars");// 显式构造函数   +1  num_strings = 3

        cout << "headline1 = " << headline1 << endl;        //
        cout << "headline2 = " << headline2 << endl;        //
        cout << "sports    = " << sports << endl;           //

        cout << "1 ----------------------------------------------------------------------------------" << endl;

        callme1(headline1);                             // 不会触发隐式复制构造函数, 因为是引用传递
        cout << "headline1 = " << headline1 << endl;        //

        cout << "2 ----------------------------------------------------------------------------------" << endl;

        callme2(headline2);                                 // 触发隐式复制构造函数, +1 理论上是num_strings = 3, 但没有显式定义, 故num_strings = 2
        cout << "headline2 = " << headline2 << endl;        //

        cout << "3 ----------------------------------------------------------------------------------" << endl;

        cout << "Initialize one object to another:" << endl;//
        StringBad sailor = sports;                          // 触发隐式复制构造函数
        cout << "sailor = " << sailor << endl;              //

        cout << "4 ----------------------------------------------------------------------------------" << endl;

        cout << "Assgin one object to another:" << endl;    //
        StringBad knot;                                     //
        knot = headline1;                                   // 调用默认赋值运算符 原型为: Class_name & Class_name:: operator = (const Class_name &);
        cout << "knot = " << knot << endl;
        cout << "Exit the block!" << endl;

        cout << "5 ----------------------------------------------------------------------------------" << endl;
        // 结束后 按照 knot, sailor, sports, headline2, headline1 回收
    }
    cout << "End of main()!" << endl;
    return 0;
}

void callme1(StringBad & stringBad) {
    cout << "String passed by reference:" << endl;
    cout << "reference stringBad = " << stringBad << endl;
}

void callme2(StringBad stringBad) {
    cout << "String passed by value:" << endl;
    cout << "value stringBad = " << stringBad << endl;
}



