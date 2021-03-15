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
# include <cstdlib>

using namespace std;

/**
 * 需求: 数据5个double值, 并计算 每个值的 80%, 并汇总数据求 avg
 * @return
 */

void file_it(ostream & os, double percent, const double array[], int arraySize);

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);
    const int arraySize = 5;
    const double percent = 0.95;
    double number[arraySize] = {100.5, 245.0, 110.8, 1000, 200.5};
    file_it(cout, percent, number, arraySize);

    ofstream outFile;
    outFile.open("D:\\CLionProjects\\cpp_study\\chapter_008\\cpp_study_0010_IO.txt");
    file_it(outFile, percent, number, arraySize);
    outFile.flush();
    outFile.close();

    return 0;
}

/**
 * TODO 继承在函数中的使用, 这块使用 父类引用 指向 子类实例
 * @param os
 * @param percent
 * @param array
 * @param arraySize
 */
void file_it(ostream & os, double percent, const double array[], int arraySize) {
    os.setf(ios_base::fixed, ios_base::floatfield);
    os.setf(ios_base::showpoint);
    os.precision(2);

    os.width(12);
    os << "number";
    os.width(20);
    os << "number * percent" << endl;

    double sumNum = 0;
    double sumPer = 0;
    for(int i = 0; i < arraySize; i++) {
        os.width(12);
        os << array[i];
        os.width(20);
        os << (array[i] * percent) << endl;

        sumNum += array[i];
        sumPer += array[i] * percent;
    }
    os << "----------------------------------------------------------------" << endl;

    os.width(5);
    os << "sum : " << sumNum;
    os.width(20);
    os << sumPer << endl;

    os.width(5);
    os << "avg : " << sumNum / arraySize;
    os.width(20);
    os << sumPer / arraySize << endl;
}


