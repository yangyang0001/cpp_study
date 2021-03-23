//
// Created by 杨建伟 on 2021/3/24.
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

const int N = 5;        // 内部链接常量区
const int BUF = 512;    // 内部链接常量区
char * buffer[BUF];     // 外部链接常量去

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);

    double * pd1, * pd2;
    pd1 = new double[N];
    pd2 = new (buffer) double[N];

    cout << "heap   address pd1     = " << * pd1  << " at location = " << &pd1 << endl;
    cout << "static address buffer  = " << buffer << " at location = " << (void *) buffer << endl;

    cout << "**********************************************************************************" << endl;

    for(int i = 0; i < N; i++) {
        pd1[i] = pd2[i] = 1000 + 20.0 * i;
    }

    cout << "the first time memory :" << endl;
    for(int i = 0; i < N; i++) {
        cout << "pd1[" << i << "] = " << pd1[i] << " at location = " << &pd1[i] << endl;
    }
    cout << "----------------------------------------------------------------------------------" << endl;
    for(int i = 0; i < N; i++) {
        cout << "pd2[" << i << "] = " << pd2[i] << " at location = " << &pd2[i] << endl;
    }

    cout << "**********************************************************************************" << endl;

    double * pd3, * pd4;
    pd3 = new double[N];
    pd4 = new (buffer) double[N];

    for(int i = 0; i < N; i++) {
        pd3[i] = pd4[i] = 1000 + 40.0 * i;
    }

    cout << "the second time memory :" << endl;
    for(int i = 0; i < N; i++) {
        cout << "pd3[" << i << "] = " << pd3[i] << " at location = " << &pd3[i] << endl;
    }
    cout << "----------------------------------------------------------------------------------" << endl;
    for(int i = 0; i < N; i++) {
        cout << "pd4[" << i << "] = " << pd4[i] << " at location = " << &pd4[i] << endl;
    }

    cout << "**********************************************************************************" << endl;
    delete pd1;
    // delete pd2;             // TODO 这行代码有问题, 因为 pd2 在 buffer 中开辟的内存, 不属于堆中的内存; process not work, 注释掉就OK了
    pd1 = new double[N];
    pd2 = new (buffer + N * sizeof(double)) double[N];
//    pd2 = new (buffer) double[N];

    for(int i = 0; i < N; i++) {
        pd1[i] = pd2[i] = 1000 + 60.0 * i;
    }

    cout << "the third time memory :" << endl;
    cout << "N * sizeof(double)  = " << 5 * sizeof(double) << endl;
    cout << "static address buffer  = " << buffer << " at location = " << (void *) buffer << endl;
    cout << "static address buffer + N * sizeof(double)  = " << buffer << " at location = " << (void *) (buffer + N * sizeof(double)) << endl;
    for(int i = 0; i < N; i++) {
        cout << "pd1[" << i << "] = " << pd1[i] << " at location = " << &pd1[i] << endl;
    }
    cout << "----------------------------------------------------------------------------------" << endl;
    for(int i = 0; i < N; i++) {
        cout << "pd2[" << i << "] = " << pd2[i] << " at location = " << &pd2[i] << endl;
    }

    delete pd1;
    delete pd3;

    return 0;
}

/**
 * pd4[0] = 1000.000000 at location = 0x10ad900e0   16
 * pd4[0] = 1000.000000 at location = 0x10ad900f0   16
 *
 * pd4[0] = 1000.000000 at location = 0x10ad90100   16 * 16
 * pd4[0] = 1000.000000 at location = 0x10ad90110
 * pd4[0] = 1000.000000 at location = 0x10ad901.0
 * pd4[0] = 1000.000000 at location = 0x10ad901.0
 * pd4[0] = 1000.000000 at location = 0x10ad901.0
 * pd4[0] = 1000.000000 at location = 0x10ad901f0
 *
 * pd4[0] = 1000.000000 at location = 0x10ad90200   16
 * pd4[0] = 1000.000000 at location = 0x10ad90210   16
 * pd2[0] = 1000.000000 at location = 0x10ad90220
 *
 * 0x10b95b0f0 = 4489326832
 * 0x10b95b230 = 4489327152
 */

