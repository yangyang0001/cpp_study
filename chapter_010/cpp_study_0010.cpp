//
// Created by 杨建伟 on 2021/3/29.
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
# include "cpp_study_0010.h"

using namespace std;

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    const string company[4] = {"DeepBlueGroup1", "DeepBlueGroup2", "DeepBlueGroup3", "DeepBlueGroup4"};
    Stock stock[4];

    // 赋值操作
    for (int i = 0; i < 4; i++) {
        stock[i] = Stock(company[i], 10 + i * 10, 100 + i * 5);
    }

    // 获取价值最高的股票
    Stock & highest = stock[0];
    for(int i = 0; i < 4; i++) {
        highest = highest.get_stock_higher(stock[i]);
    }
    highest.show();

    return 0;
}


