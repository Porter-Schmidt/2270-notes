#include <iostream>
using namespace std;

// Bubbe sort
// Bubbles (switches) 2 elements if one is bigger than the other until all items have been sorted
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // After each pass, the largest remaining element "bubbles" to the end
        for (int j = 0; j < n; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
};
// O(n^2) complexity time


// Recursion
// Using a function inside of itself
void printRecursive(int n) {
    if (n == 0) {
        return;
        cout << "n = " << n << endl;
        printRecursive(n -1);
    }
}
int main() {
    printRecursive(3);
    return 0;
}

// Example problem: with a recursive function to solve n!:
int fact(int n) {
    if (n > 1) {
        return n * fact(n - 1);
    } else {
        return 1;
    }
}