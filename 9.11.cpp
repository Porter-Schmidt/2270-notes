#include <iostream>
using namespace std;

/*
Stack vs. Heap (contiguous vs "scattered")
- Stack: Stack variables also called automatic variables
- Heap: Heap memory is explicitly managed by the programer, request more heap memory dynamically (i.e. runtime)
*/

/*
dangling pointer:
- A pointer that points to a memory address that is no longer valid (BAD!)

int *p1;
p1 = new int;
*p1 = 6;

delete p1; // dangling ptr
*p1 = 22; // dangling ptr
*/

// Double delete is "undefined behavior" (in other words: very bad)

int main() {
    int *x = new int[5]; // Declare array length 5 on the heap
    int *x = new int(5); // Single variable intialized to 5

    int *x = new int; *x = 5; // Same thing as above
}

int main() {
    //say, initial array a has a length of 3
    int n = 3;

    int *a = new int[n];

    // 1) allocate memory for a dynamic array that is 2n long
    int *temp = new int[2*n];

     // 2> copy the contents of array pointed to by a into first
     // n elements of array pointed to by temp
     for (int i = 0; i < n; i++) {
        temp[i] = a[i];
     }
     
     // return memory to heap

     delete [] a;
     a = temp;

     /*
     // if you swap the lines of code
     a = temp;
     delete [] a;
     // shit breaks and there is a memory leak
     // don't do that shit bc tis a fucky wucky
     // youre also de alocating the wrong array
     */

     // assign a to point to temp
     n = 2*n; // update the size
}

void foo(int a_foo[]) {
    cout << "C > " << a_foo << endl;
    cout << "D > " << &a_foo << endl;
}
int main() {
    int n = 3;
    int *a_main = new int[n];

    cout << "A > " << a_main << endl;
    cout << "B > " << &a_main << endl;
    foo(a_main);
    return 0;
}
// Different addresses