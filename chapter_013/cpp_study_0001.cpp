//
// Created by 杨建伟 on 2021/4/16.
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

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    PingPangPlayer player1 = PingPangPlayer("zhang", "san", true);
    PingPangPlayer player2 = PingPangPlayer("li", "si", false);

    player1.name();
    if(player1.hasTable()) {
        cout << "has table!" << endl;
    } else {
        cout << "has not table !" << endl;
    }

    player2.name();
    if(player2.hasTable()) {
        cout << "has table!" << endl;
    } else {
        cout << "has not table !" << endl;
    }

    return 0;
}


