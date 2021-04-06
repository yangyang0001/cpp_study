//
// Created by 杨建伟 on 2021/4/5.
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
        cout << "Starting inner block!" << endl;
        StringBad headline1("Celery Stalks at Midnight");
        StringBad headline2("Lettuce Prey");
        StringBad sports("Spinach Leaves Bowl for Dollars");

        cout << "headline1 = " << headline1 << endl;
        cout << "headline2 = " << headline2 << endl;
        cout << "sports    = " << sports << endl;

        cout << "1 ----------------------------------------------------------------------------------" << endl;

        callme1(headline1);
        cout << "headline1 = " << headline1 << endl;

        cout << "2 ----------------------------------------------------------------------------------" << endl;

        callme2(headline2);
        cout << "headline2 = " << headline2 << endl;

        cout << "3 ----------------------------------------------------------------------------------" << endl;

        cout << "Initialize one object to another:" << endl;
        StringBad sailor = sports;
        cout << "sailor = " << sailor << endl;

        cout << "4 ----------------------------------------------------------------------------------" << endl;

        cout << "Assgin one object to another:" << endl;
        StringBad knot = headline1;
        cout << "knot = " << knot << endl;
        cout << "Exit the block!" << endl;

        cout << "5 ----------------------------------------------------------------------------------" << endl;
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


