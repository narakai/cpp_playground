//
// Created by lai leon on 2021/12/7.
//

#include "student.h"

//在C++中 struct和class唯一的区别就在于 默认的访问权限不同
//struct 默认权限为公共
//class 默认权限为私有

//构造函数语法：类名(){}
//
//构造函数，没有返回值也不写void
//        函数名称与类名相同
//构造函数可以有参数，因此可以发生重载
//        程序在调用对象时候会自动调用构造，无须手动调用,而且只会调用一次
//        析构函数语法： ~类名(){}
//
//析构函数，没有返回值也不写void
//        函数名称与类名相同,在名称前加上符号 ~
//析构函数不可以有参数，因此不可以发生重载
//        程序在对象销毁前会自动调用析构，无须手动调用,而且只会调用一次

////无参（默认）构造函数
//Person() {
//    cout << "无参构造函数!" << endl;
//}
////有参构造函数
//Person(int a) {
//    age = a;
//    cout << "有参构造函数!" << endl;
//}
////拷贝构造函数
//Person(const Person& p) {
//    age = p.age;
//    cout << "拷贝构造函数!" << endl;
//}
////析构函数
//~Person() {
//    cout << "析构函数!" << endl;
//}

int main() {

    Student stu;
    stu.setName("德玛西亚");
    stu.setID(250);
    stu.showStudent();

    return 0;
}