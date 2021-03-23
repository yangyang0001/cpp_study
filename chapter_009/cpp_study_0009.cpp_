//
// Created by 杨建伟 on 2021/3/23.
//

# include <iostream>
# include <climits>
# include <string>
# include <cstring>
# include <vector>
# include <array>
# include <ctime>
# include <cctype>

/**
 * new 运算符的4种用法_第1种
 */
using namespace std;

struct chaff {
    char dross[20];
    int slag;
};

char buffer1[20];
char buffer2[500];

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    chaff * p1, * p2;
    int * p3, * p4;

    p1 = new chaff;             // place chaff in heap
    p3 = new int;               // place int in heap

    p2 = new (buffer1) chaff;   // place chaff in buffer1
    p4 = new (buffer2)  int;    // place chaff in buffer2

    cout << "buffer1 at location = " << &buffer1 << endl;
    cout << "buffer2 at location = " << &buffer2 << endl;

    cout << "----------------------------------------------------------------------------------" << endl;

    cout << "p1 at location      = " << p1 << endl;
    cout << "p3 at location      = " << p3 << endl;

    cout << "----------------------------------------------------------------------------------" << endl;

    cout << "p2 at location      = " << p2 << endl;
    cout << "p4 at location      = " << p4 << endl;


    return 0;
}

