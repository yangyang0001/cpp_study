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

#ifndef CPP_STUDY_CPP_STUDY_0003_H
#define CPP_STUDY_CPP_STUDY_0003_H

class Person {
    private: string name;
    private: string pass;

    // 通常 在类中 只提供 方法的声明, 而非方法的定义, 因为一旦定义表示就自动转化为内联函数了
    public: void set_name(string param_name);
    public: void set_pass(string param_pass);
    public: string get_name();
    public: string get_pass();

    public: void show_person();


    // 构造方法 无论是 有参构造函数 还是 无参构造函数, 都必须实现 否则运行时 编译报错!
    public: Person() {}

    public: Person(string param_name, string param_pass) {
        name = param_name;
        pass = param_pass;
    }
};

inline void Person::show_person() {
    cout << "inline person.name = " << get_name() << endl;
    cout << "inline person.pass = " << get_pass() << endl;
}

#endif //CPP_STUDY_CPP_STUDY_0003_H
