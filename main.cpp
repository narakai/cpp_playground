#include <iostream>
// this line should not be put in headers because it defeats the purpose of using namespaces
using namespace std;

int main() {
    cout << "Enter Name!\n";
    string first_name;
    cin >> first_name;

    int x = 5;                      // create an int on the stack
    // automatically freed when calling function returns

    int* y = new int(6);            // crates an integer on the heap, has to be freed manually using 'delete'

    cout << "hello " << first_name + " " + to_string(x);
    cout << "hello " << first_name + " " + to_string(*y);

    delete y;                       // frees heap memory occupied by y
    y = nullptr;
}