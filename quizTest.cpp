#include <iostream>
using namespace std;

// int main() {
//     int a = 30; int b = 40; int c = 50;
//     int *pa = &a; int *pb = &b; int *pc = &c;

//     *pc = *pa + *pb;
//     pb = pa;

//     cout << *pa << ", " << *pb << ", "  << *pc << endl;

//     int arr[10] = {1, 2, 3, 4, 5, 4, 3, 2, 1, 0};

//     cout << arr[4] + *(arr+3) << endl;
//     cout << *arr << endl;

//     int *result = new int[50];

//     result[0] = 5;
// }

void Swap(int &x, int y) {
    int temp = x;
    x = y;
    y = temp;
}
int main () {
    int a = 1;
    int b = 2;
    Swap(a, b);
    cout << a << ", " << b << endl;
    return 0;
}
