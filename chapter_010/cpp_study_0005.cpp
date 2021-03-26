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

using namespace std;


/**
 * 书中的错误, 这块根本就没有必要 delete, 这是在网络上查看C++书籍错误的时候, 书写验证, 页码为: 268 (287 / 956)
 */
struct free_throws {
    string name;
};


const free_throws & clone (free_throws & ft) {
    free_throws * pt  = new free_throws;
    * pt = ft;
    cout << "pt at location = " << & pt << endl;
    return * pt;
}

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    free_throws one = {"zhangsan"};
    cout << "one at location          = " << &one << endl;
    const free_throws & return_clone  = clone(one);
    cout << "return_clone at location = " << &return_clone << endl;

    return 0;
}


