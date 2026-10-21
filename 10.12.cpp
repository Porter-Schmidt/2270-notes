#include <iostream>
using namespace std;

// ---------- EXAM 2 STUDY ----------


// Undefined Behavior
// - p is a copy, so p = nullptr changes only the copy
// - data in main still holds the freed adress: a dangling pointer
// - *data reads freed memory

// Fix: pass the pointer by reference


void release(int*&p) {
    delete p;
    p = nullptr;
}
int main() {
    int* data = new int(42);
    release(data);
    if (data != nullptr) {
        cout << *data << endl;
    }
}


// Returning the address of a local
int* makeCounter() {
    int count = 0;
    return &count; // returning address of local variable
}
int main() {
    int* c = makeCounter();
    cout << *c << endl; // Undefined Behavior
}
// Trying to reference a memory address that has been freed - illegal


// Two pointers, one object
struct Box {int size;};
Box b;
b.size = 3;
Box* p = &b;
Box* q = p;
q->size = 10;
p = new Box;
p->size = 5;
cout << b.size << " " << q->size << " " << p->size << endl; // prints: 10 10 5


// Recursion:
int pw(int b, int e) {
    if (e == 0) {
        return 1;
    }
    return b * pw(b, e - 1);
}
// main calls pw(2, 3)
// How many times is pw called? 4 times: pw(2, 3), pw(2, 2), pw(2, 1), pw(2, 0)
// What is the return value? 8
// What is the most frames of pw on the stack at once? 4 frames

int half (int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + half(n / 2);
}
// What does half(6) return? 3
// What does half(5) return? 2
// Change one thing so it terminates for every output: 
// - return 1 + half(n / 2); -> return 1 + half(n / 2) if (n > 0) else 0;

// Unlinking a node from a doubly linked list:
// Remove node cur from the middle of the list
cur->prev->next = cur->next;
cur->next->prev = cur->prev;
delete cur;

// What if delete cur; moves to the first line?
// - The node is deleted before the pointers are updated, so the list is corrupted and may crash when trying to access the next or prev pointers of the deleted node.
// What if cur is the head? 
// - If cur is the head, then cur->prev is nullptr, so cur->prev->next will cause a segmentation fault
// What if cur is the tail?
// - If cur is the tail, then cur->next is nullptr


/* ----- Unlinking a node from a doubly linked list: -----
-- Delete first:
Undefined behavior: The next two lines read cur->prev and cur->next from freed memory

-- cur is the head:
cur ->prev is nullptr, so line 1 crashes. Also head must move to cur->next

-- cur is the tail:
cur->next is nullptr, so line 2 crashes
*/

// Write the tests for checking the code
// EX: checking for empty lists, about the head, tail


// Build the tree
// Insert these keys, in this order, into an empty BST:
// 50, 30, 70, 20, 40, 60, 80
// What is the height of the tree? 2
// What is the inorder traversal of the tree? 20, 30, 40, 50, 60, 70, 80
// What is the preorder traversal of the tree? 50, 30, 20, 40, 70, 60, 80
