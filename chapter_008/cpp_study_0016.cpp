//
// Created by 杨建伟 on 2021/3/17.
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

template <typename T>
void my_swap(T & a, T & b);

template <typename T>
void my_swap(T * a, T * b, int size);

template <typename T>
void my_show(T * a, int size);

using namespace std;

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    int arr[2] = {1, 3};
    int brr[2] = {2, 4};
    my_swap(arr, brr, 2);

    my_show(arr, 2);
    cout << "----------------------------------------------------------------------------------" << endl;
    my_show(brr, 2);

    return 0;
}

template <typename T>
void my_swap(T & a, T & b) {
    T temp = a;
    a = b;
    b = temp;
}

template <typename T>
void my_swap(T * a, T * b, int size) {
    for(int i = 0; i < size; i++) {
        T temp = *(a + i);
        * (a + i) = * (b + i);
        * (b + i) = temp;
    }
}

template <typename T>
void my_show(T * arr, int size) {
    for(int i = 0; i < size; i++) {
        cout << "arr[i] = " << arr[i] << endl;
    }
}



