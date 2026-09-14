#include <iostream>
using namespace std;

//pointers
int x;

void foo() {
    x = 15;
}

void boo() {
    //change x
    int* p = &x;
    *p = 10;
}

int main() {
    foo();
    boo();
    return 0;
}