//
// Created by 杨建伟 on 2021/3/21.
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

extern int tom;
static int dick = 10;
int harry = 200;

void remote_access() {
    cout << "In remote_access() tom   = " << tom   << " at location = " << &tom << endl;
    cout << "In remote_access() dick  = " << dick  << " at location = " << &dick << endl;
    cout << "In remote_access() harry = " << harry << " at location = " << &harry << endl;
}

