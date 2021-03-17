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

/**
 * 函数调用的优先规则
 * 1 非模板函数 > 模板函数
 * 2 模板函数中 具体化函数 > 模板化函数
 */

using namespace std;

struct job {
    char name[40];
    double salary;
    int floor;
};

// 非模板函数
void my_swap(job & j, job & k);

// 泛化模板函数
template <typename T> void my_swap(T & a, T & b);

// 具体化模板函数
template <> void my_swap<job>(job & j, job & k);

void show_job(job & j);

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    job a = {"zhangsan", 100.5, 1};
    job b = {"zhaoliu",  200.5, 2};

    my_swap(a, b);
    show_job(a);
    show_job(b);


    return 0;
}

template <typename T> void my_swap(T & a, T & b) {
    cout << "generic template function invoked!" << endl;
    T temp = a;
    a = b;
    b = temp;
}

// concrete template function  在方法名称后面加不加<typeName> 都可以
template <> void my_swap<job>(job & j, job & k) {
    cout << "concrete template function invoked!" << endl;
    double salary;
    int floor;

    salary = j.salary;
    floor  = j.floor;
    j.salary = k.salary;
    j.floor  = k.floor ;
    k.salary = salary;
    k.floor  = floor;
}

void my_swap(job & j, job & k) {
    cout << "nothing template function invoked!" << endl;
    job temp = j;
    j = k;
    k = temp;
}

void show_job(job & j) {
    cout << "job.name   = " << j.name << endl;
    cout << "job.salary = " << j.salary << endl;
    cout << "job.floor  = " << j.floor << endl;
    cout << "----------------------------------------------------------------------------------" << endl;
}

