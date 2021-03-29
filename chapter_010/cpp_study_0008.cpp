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
# include "cpp_study_0008.h"

using namespace std;

/**
 * TODO 本程序 是不断添加 代码量的 过程完成的, 每一个横线 为增量一次的代码, 这块在后期自己看的时候注意一下
 * @return
 */
int main() {

    cout.setf(ios_base::fixed, ios_base::floatfield);

    Stock stock1, stock2, stock3;   // 自动存储, 存储位置在stack中

    /**
     * 横线以上的 内存回收策略 与 执行顺序
     * 内存回收的过程:
     * 1、临时内存变量的回收
     *      先为 stock1 temp object 的回收, 再为 stock2 temp object 的回收
     * 2、stack的回收, 后入先出的策略回收
     *      压栈的 顺序为 stock1, stock2, stock3
     *      回收栈 顺序为 stock3, stock2, stock1
     *
     *  结果为:
     *      ~ Stock() invoked, the company = DeepBlueGroup1     // stock1 temp object
     *      ~ Stock() invoked, the company = DeepBlueGroup2     // stock2 temp object
     *
     *      ~ Stock() invoked, the company = DeepBlueGroup
     *      ~ Stock() invoked, the company = DeepBlueGroup2
     *      ~ Stock() invoked, the company = DeepBlueGroup1
     */

    stock1 = Stock("DeepBlueGroup1", 100, 100);     // 产生 temp object 赋值给 stock1
    stock2 = Stock("DeepBlueGroup2", 100, 100);     // 产生 temp object 赋值给 stock2

    cout << "------------------------------------------------------------------------------------------------------" << endl;

    // 最后回收 静态变量, 存储在 静态存储区
    static Stock stock_s = Stock("static", 10000, 10000);

    // FIXME heap区 或 free store 中的回收, 必须主动调用 delete 才能触发 析构函数的调用, 一旦delete就立刻触发, 所以 在C, C++中释放内存非常重要, 否则内存会满
    Stock * stock_new = new Stock("stock_new", 20000, 20000);
    delete stock_new;

    /**
     * 回收顺序为: stock_b, stock_a, 如果结合上面的顺序, 则为: stock1 temp object, stock2 temp object, stock_b, stock_a, stock3, stock2, stock1
     * 结果为:
     *      ~ Stock() invoked, the company = DeepBlueGroup1     // stock1 temp object
     *      ~ Stock() invoked, the company = DeepBlueGroup2     // stock2 temp object
     *
     *      ~ Stock() invoked, the company = DeepBlueGroup      // stock_b
     *      ~ Stock() invoked, the company = DeepBlueGroup      // stock_a
     *      ~ Stock() invoked, the company = DeepBlueGroup      // stock3
     *
     *      ~ Stock() invoked, the company = DeepBlueGroup2     // stock2
     *      ~ Stock() invoked, the company = DeepBlueGroup1     // stock1
     *      ~ Stock() invoked, the company = static             // stock_s
     */
    Stock stock_a, stock_b;

    cout << "------------------------------------------------------------------------------------------------------" << endl;


    return 0;
}


