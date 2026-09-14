#include <iostream>
using namespace std;

// pointers and dynamic memory

int main() {
    // dynamically allocate memory for an integer
    int* p = new int;
    *p = 42; // assign a value to the allocated memory
    cout << "Value: " << *p << endl; // output the value
    delete p; // free the allocated memory

    // dynamically allocate memory for an array of integers
    int size = 5;
    int* arr = new int[size];
    for (int i = 0; i < size; i++) {
        arr[i] = i * 10; // assign values to the array
    }
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl; // output the array values
    }
    delete[] arr; // free the allocated array memory

    return 0;
}   