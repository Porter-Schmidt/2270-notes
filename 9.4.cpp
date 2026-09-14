#include <iostream>
using namespace std;

//pass by reference
void PBR(int &x) {
    x = 7;
    
}

int main() {
    int a = 5;
    cout << "Before PBR: " << a << endl; // Output: 5
    PBR(a);
    cout << "After PBR: " << a << endl; // Output: 7
    return 0;
}

//pass by array

void PBA(int arrPB[]) {
    arrPB[0] = 10;
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "Before PBA: " << arr[0] << endl; // Output: 1
    PBA(arr);
    cout << "After PBA: " << arr[0] << endl; // Output: 10
    return 0;
}
