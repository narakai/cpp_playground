#include <iostream>
#include <vector>
// this line should not be put in headers because it defeats the purpose of using namespaces
//https://github.com/AnkerLeng/Cpp-0-1-Resource/blob/master/第1阶段C%2B%2B%20匠心之作%20从0到1入门/C%2B%2B基础入门讲义/C%2B%2B基础入门.md

void swap(int a, int b) {
//    值传递时，==如果形参发生，并不会影响实参==
    using namespace std;
    cout << "交换前：" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "交换后：" << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    //return ; 当函数声明时候，不需要返回值，可以不写return
}

//值传递
void swap1(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

//地址传递
void swap2(int *p1, int *p2) {
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
}

//int main() {
//    using namespace std;
//    cout << "Enter Name!\n";
//    string first_name;
//    cin >> first_name;
//
//    int x = 5;                      // create an int on the stack
//    // automatically freed when calling function returns
//
//    int* y = new int(6);            // crates an integer on the heap, has to be freed manually using 'delete'
//
//    cout << "hello " << first_name + " " + to_string(x);
//    cout << "hello " << first_name + " " + to_string(*y);
//    cout << "hello " << "y address" << &y;
//
//    delete y;                       // frees heap memory occupied by y
//    y = nullptr;
//
////    int number_of_dup = 0;
////    string prev;
////    string current;
////    while (cin >> current) {
////        if (prev == current) {
////            ++number_of_dup;
////            cout << "found duplicate: " << current << "repeated: " << number_of_dup << '\n';
////        }
////        prev = current;
////    }
//
////    vector<string> test_vector(2);
////    test_vector[0] = "0";
////    test_vector[1] = "1";
////    test_vector.emplace_back("2");
//
////    float f1 = 3.14f;
////    double d1 = 3.14;
////
////    cout << f1 << endl;
////    cout << d1 << endl;
////
////    cout << "float  sizeof = " << sizeof(f1) << endl;
////    cout << "double sizeof = " << sizeof(d1) << endl;
////
////    //科学计数法
////    float f2 = 3e2; // 3 * 10 ^ 2
////    cout << "f2 = " << f2 << endl;
////
////    float f3 = 3e-2;  // 3 * 0.1 ^ 2
////    cout << "f3 = " << f3 << endl;
//
////    int a = 10;
////    int b = 20;
////
////    swap(a, b);
////
////    cout << "main中的 a = " << a << endl;
////    cout << "main中的 b = " << b << endl;
//
//    int a = 10;
//    int b = 20;
//    swap1(a, b); // 值传递不会改变实参
//
//    swap2(&a, &b); //地址传递会改变实参
//
//    cout << "a = " << a << endl;
//
//    cout << "b = " << b << endl;
//
//    return 0;
//}