//
// Created by lai leon on 2021/12/4.
//https://github.com/AnkerLeng/Cpp-0-1-Resource/blob/master/第2阶段实战-通讯录管理/通讯录管理系统讲义/通讯录管理系统.md
//

#include<iostream>

using namespace std;

#include <string>  //string头文件

//联系人结构体
struct Person {
    string m_Name; //姓名
    int m_Sex; //性别：1男 2女
    int m_Age; //年龄
    string m_Phone; //电话
    string m_Addr; //住址
};

#define MAX 1000 //最大人数

//通讯录结构体
struct Addressbooks {
    struct Person personArray[MAX]; //通讯录中保存的联系人数组
    int m_Size; //通讯录中人员个数
};

//1、添加联系人信息
void addPerson(Addressbooks *abs) {
    //判断电话本是否满了
    if (abs->m_Size == MAX) {
        cout << "通讯录已满，无法添加" << endl;
        return;
    } else {
        //姓名
        string name;
        cout << "请输入姓名：" << endl;
        cin >> name;
        abs->personArray[abs->m_Size].m_Name = name;

        cout << "请输入性别：" << endl;
        cout << "1 -- 男" << endl;
        cout << "2 -- 女" << endl;

        //性别
        int sex = 0;
        while (true) {
            cin >> sex;
            if (sex == 1 || sex == 2) {
                abs->personArray[abs->m_Size].m_Sex = sex;
                break;
            }
            cout << "输入有误，请重新输入";
        }

        //年龄
        cout << "请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;

        //联系电话
        cout << "请输入联系电话：" << endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;

        //家庭住址
        cout << "请输入家庭住址：" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;

        //更新通讯录人数
        abs->m_Size++;

        cout << "添加成功" << endl;
    }
}

//2、显示所有联系人信息
void showPerson(Addressbooks *abs) {
    if (abs->m_Size == 0) {
        cout << "当前记录为空" << endl;
    } else {
        for (int i = 0; i < abs->m_Size; i++) {
            cout << "姓名：" << abs->personArray[i].m_Name << "\t";
            cout << "性别：" << (abs->personArray[i].m_Sex == 1 ? "男" : "女") << "\t";
            cout << "年龄：" << abs->personArray[i].m_Age << "\t";
            cout << "电话：" << abs->personArray[i].m_Phone << "\t";
            cout << "住址：" << abs->personArray[i].m_Addr << endl;
        }
    }
}

//https://www.zhihu.com/question/35593391
//判断是否存在查询的人员，存在返回在数组中索引位置，不存在返回-1

//引用使用的场景，通常用来修饰形参
int isExist(Addressbooks *abs, const string& name) {
    for (int i = 0; i < abs->m_Size; i++) {
        if (abs->personArray[i].m_Name == name) {
            return i;
        }
    }
    return -1;
}


//菜单界面
void showMenu() {
    cout << "***************************" << endl;
    cout << "*****  1、添加联系人  *****" << endl;
    cout << "*****  2、显示联系人  *****" << endl;
    cout << "*****  3、删除联系人  *****" << endl;
    cout << "*****  4、查找联系人  *****" << endl;
    cout << "*****  5、修改联系人  *****" << endl;
    cout << "*****  6、清空联系人  *****" << endl;
    cout << "*****  0、退出通讯录  *****" << endl;
    cout << "***************************" << endl;
}

//int main() {
//
//    int select = 0;
//    Addressbooks abs;
//    abs.m_Size = 0;
//
//    while (true) {
//        showMenu();
//
//        cin >> select;
//
//        switch (select) {
//            case 1:  //添加联系人
//                addPerson(&abs);
//                break;
//            case 2:  //显示联系人
//                break;
//            case 3:  //删除联系人
//                break;
//            case 4:  //查找联系人
//                break;
//            case 5:  //修改联系人
//                break;
//            case 6:  //清空联系人
//                break;
//            case 0:  //退出通讯录
//                cout << "欢迎下次使用" << endl;
//                return 0;
//            default:
//                break;
//        }
//    }
//}
