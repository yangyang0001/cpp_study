//
// Created by 杨建伟 on 2021/3/25.
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
# include "cpp_study_0001_stock.h"

using namespace std;

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    Stock stock_cat;
    stock_cat.acquire("NanoSmart", 20, 12.50);
    stock_cat.show();

    stock_cat.buy(15, 18.125);
    stock_cat.show();

    stock_cat.sell(400, 20.0);
    stock_cat.show();

    return 0;
}


