//
// Created by lai leon on 2021/12/7.
//

#include<iostream>

using namespace std;

#include <string>  //string头文件

#ifndef HELLO_WORLD_STUDENT_H
#define HELLO_WORLD_STUDENT_H

//学生类
class Student {
public:
    void setName(string name) {
        m_name = name;
    }

    void setID(int id) {
        m_id = id;
    }

    void showStudent() {
        cout << "name:" << m_name << " ID:" << m_id << endl;
    }

public:
    string m_name;
    int m_id;

    //汽车  保护权限
protected:
    string m_Car;

//银行卡密码  私有权限
private:
    int m_Password;
};

#endif //HELLO_WORLD_STUDENT_H
