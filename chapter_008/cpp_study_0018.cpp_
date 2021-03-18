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

using namespace std;

struct person {
    string username;
    string password;
    int gender;
    int age;
};

// generic function template
template <typename T> void my_swap(T & a, T & b);

// concrete function template
template <> void my_swap<person>(person & a, person & b);

void my_swap(person & a, person & b);

void show_person(person & a);

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    person p1 = {"zhangsan", "111222", 1, 1};
    person p2 = {"lisi", "333444", 2, 2};

    my_swap(p1, p2);
    show_person(p1);
    show_person(p2);


    return 0;
}

// generic function template
template <typename T> void my_swap(T & a, T & b) {
    cout << "generic template function invoked!" << endl;
    T temp = a;
    a = b;
    b = temp;
}

template <> void my_swap(person & a, person & b) {
    cout << "concrete template function invoked!" << endl;
    int gender;
    int age;

    gender = a.gender;
    age = a.age;

    a.gender = b.gender;
    a.age = b.age;

    b.gender = gender;
    b.age = age;

}

void my_swap(person & a, person & b){
    cout << "noting template function invoked!" << endl;
    person temp = a;
    a = b;
    b = temp;
}

void show_person(person & a) {
    cout << "person.username = " << a.username << endl;
    cout << "person.password = " << a.password << endl;
    cout << "person.gender   = " << a.gender << endl;
    cout << "person.age      = " << a.age << endl;
    cout << "----------------------------------------------------------------------------------" << endl;
}

