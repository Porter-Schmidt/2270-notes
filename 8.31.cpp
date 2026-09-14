#include <iostream>
// google test
// #include<gtest/gtest.h>

using namespace std;

// Function overloading

void print(int a) {
    cout << "Integer: " << a << endl;
}

void print(double a) {
    cout << "Double: " << a << endl;
}

void print(int a, double b) {
    cout << "Integer: " << a << ", Double: " << b << endl;
}

int main() {
    print(5);
    print(3.14);
    print(5, 3.14);
    return 0;


    //unit test
    //assert(expect, result)

    //pointers
    int * p;
    // p is a pointer to an integer
    int x;
    p = &x;

    cout << "Value pointed to by p: " << *p << endl;

    double * ptr;
    double y;
    ptr = &y;

    cout << "Value pointed to by ptr: " << *ptr << endl;

    *p = 10;
    // dereference the pointer to assign a value
    cout << "Value pointed to by p after assignment: " << *p << endl;
    // x is now 10

    // p=nullptr;
    // p now points to nothing

    int z;
    z=*p; 
    // z now holds the value pointed to by p
    cout << "Value of z: " << z << endl;

    

}