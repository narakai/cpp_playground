//
// Created by lai leon on 2021/12/7.
//

#include <iostream>

using namespace std;

//栈区：
//由编译器自动分配释放, 存放函数的参数值,局部变量等
//注意事项：不要返回局部变量的地址，栈区开辟的数据由编译器自动释放

//int *func() {
//    int a = 10;
//    return &a;
//}
//
//int main() {
//
//    int *p = func();
//
//    cout << *p << endl;
//    cout << *p << endl;
//
//    return 0;
//}

//堆区：
//由程序员分配释放,若程序员不释放,程序结束时由操作系统回收
//在C++中主要利用new在堆区开辟内存
//C++中利用==new==操作符在堆区开辟数据
//堆区开辟的数据，由程序员手动开辟，手动释放，释放利用操作符 ==delete==
//利用new创建的数据，会返回该数据对应的类型的指针

int *func() {
    int *a = new int(10);
    return a;
}

//int main() {
//
//    int *p = func();
//
//    cout << *p << endl;
//    cout << *p << endl;
//
//    //利用delete释放堆区数据
//    delete p;
//
//    //释放数组 delete 后加 []
////    delete[] arr;
//
//    //cout << *p << endl; //报错，释放的空间不可访
//
//    return 0;
//}

//通过引用参数产生的效果同按地址传递是一样的。引用的语法更清楚简单
//1. 值传递
void mySwap01(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

//2. 地址传递
void mySwap02(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

//3. 引用传递
void mySwap03(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

//引用使用的场景，通常用来修饰形参
void showValue(const int &v) {
    //v += 10;
    cout << v << endl;
}

//int main() {
//
//    //int& ref = 10;  引用本身需要一个合法的内存空间，因此这行错误
//    //加入const就可以了，编译器优化代码，int temp = 10; const int& ref = temp;
//    const int &ref = 10;
//
//    //ref = 100;  //加入const后不可以修改变量
//    cout << ref << endl;
//
//    //函数中利用常量引用防止误操作修改实参
//    int a = 10;
//    showValue(a);
//
//    return 0;
//}