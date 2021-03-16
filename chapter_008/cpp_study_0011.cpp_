//
// Created by 杨建伟 on 2021/3/15.
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

char * left(const char * str, int n = 1);

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    const char * str = "HelloWorld";
    cout << "outer str = " << str << " at location = " << (int *) str << endl;
    char * arr = left(str, 100);
    cout << "outer arr = " << arr << " at location = " << (int *) arr << endl;

    delete[] arr;
    return 0;
}

// 指着数组需要用 delete[]来释放内存! 小于等于2时有问题
char * left(const char * str, int n) {
    if(n < 0) {
        n = 0;
    }

    char * arr = new char[n+1];
    for(int i = 0; i < n && str[i]; i++) {
        arr[i] = str[i];
        cout << "after  arr[" << i << "] = " << arr[i] << endl;
    }
    // 字符串最后一定要补充 '\0', 否则报错
    arr[n] = '\0';

    cout << "inner str = " << str << " at location = " << (int *) str << endl;
    cout << "inner arr = " << arr << " at location = " << (int *) arr << endl;
    return arr;
}


