//
// Created by 杨建伟 on 2021/3/18.
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

void oil(int x);

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);
    int texas = 31;
    int year = 2011;
    cout << "In main() texas  = " << texas << " at location = " << & texas << endl;
    cout << "In main() year   = " << year  << " at location = " << & year  << endl;

    oil(texas);

    cout << "In main() texas  = " << texas << " at location = " << & texas << endl;
    cout << "In main() year   = " << year  << " at location = " << & year  << endl;

    return 0;
}

void oil(int x) {
    int texas = 5;
    cout << "In oil() x       = " << x      << " at location = " << & x      << endl;
    cout << "In oil() texas   = " << texas  << " at location = " << & texas  << endl;
    {
        int texas = 113;
        cout << "In block x       = " << x      << " at location = " << & x      << endl;
        cout << "In block texas   = " << texas  << " at location = " << & texas  << endl;
    }
    cout << "Post block texas = " << texas  << " at location = " << & texas  << endl;
}

/**
In main() texas  = 31 at location = 0x7ffeec82aa68
In main() year   = 2011 at location = 0x7ffeec82aa64
In oil() x       = 31 at location = 0x7ffeec82aa2c
In oil() texas   = 5 at location = 0x7ffeec82aa28
In block x       = 31 at location = 0x7ffeec82aa2c
In block texas   = 113 at location = 0x7ffeec82aa24
Post block texas = 5 at location = 0x7ffeec82aa28
In main() texas  = 31 at location = 0x7ffeec82aa68
In main() year   = 2011 at location = 0x7ffeec82aa64
 */


