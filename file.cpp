//
// Created by lai leon on 2021/12/7.
//

#include "file.h"
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

class Person {
public:
    char m_Name[64];
    int m_Age;
};

//二进制文件  写文件
void test01() {
    //1、包含头文件

    //2、创建输出流对象
    ofstream ofs("person.txt", ios::out | ios::binary);

    //3、打开文件
    //ofs.open("person.txt", ios::out | ios::binary);

    Person p = {"张三", 18};

    //4、写文件
    ofs.write((const char *) &p, sizeof(p));

    //5、关闭文件
    ofs.close();
}

void test02() {
    ifstream ifs("person.txt", ios::in | ios::binary);
    if (!ifs.is_open()) {
        cout << "文件打开失败" << endl;
    }

    Person p{};
    ifs.read((char *) &p, sizeof(p));

    cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
}

int main() {

    test02();

    return 0;
}
