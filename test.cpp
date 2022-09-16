//
// Created by 张正 on 2022/9/16.
//

#include <iostream>

using namespace std;

// int* (*ptr1)(int *p) 是一个指向函数的指针，该函数的参数列表是(int *p)，其返回类型是int*
// int* (*ptr2)[5] 是一个指向存储int*型变量的数组的指针，本质是一个数组指针
int* test1(int *p) {
    // int* (*ptr1)(int *p)是一个指向test1这样的函数的指针
    cout << "传入指针 = " << p << endl;
    cout << "指针指向 = " << *p << endl;
    return p;
}

void test2() {
    int* (*ptr2)[5];
    cout << sizeof(ptr2) << endl;  // 证明ptr2本身是一个指针
    cout << sizeof(*ptr2) << endl;  // 证明指向的是大小为5的数组
}


//1. 此种情况数据量较小，可以将数据直接放入内存中进行比对。比如可以将一份数据放在Redis数据库中，逐行读取另一份文件比对。
//2. 此时数据量较大，且观察得到ID递增，采用双指针的思想进行处理。
//    2.1 读入T1文件一行，记录该行ID。
//    2.2 读入T2文件一行，记录该行ID，比对。
//        若相同，T1下一行，T2下一行。
//        若不同，T1的ID小，T1下一行，比对，回到2.2。
//        若不同，T2的ID小，T2下一行，比对，回到2.2。
//3. 直到T1或者T2读到最后一行，结束。

// 方式A调用后宏替换后只会循环执行print，不会循环执行工作函数，方式B同理。
// 本质问题是宏函数只进行简单替换，缺少了花括号{}包含整个语句块，在宏定义中加上{}即可。




int main() {
    int (*p)[5];
    cout << sizeof (p) << endl;
    return 0;
}

