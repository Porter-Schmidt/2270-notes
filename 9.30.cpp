#include <iostream>
using namespace std;

// Last in, First out: LIFO
// Push: Add an item to the top
// Pop: Remove the item from the top
// Peek: Look at the top item without removing it

/* Operations:
- Initialize() - create an empty stack - 0(1)
- isEmpty() - true if the stack has no elements - 0(1)
- isFull() - true if no more room (bounded stacks only) - 0(1)
- push(item) - add an item on top - 0(1)
- pop() - remove the top item - 0(1)
- peek() - return the top item without removing it - 0(1)
- disp() - print the whole stack, top to bottom - 0(n)
*/

// Class Desclaration
class Stack {
    private:
        struct Node {
            string item;
            Node *next;
        };
        Node *top;
        int count;
    public:
        Stack() {
            top = nullptr;
        }
        bool isEmpty() {
            if (top == nullptr) {
                return true;
            } else {
                return false;
            }
        }
        void push(string newItem) {
            Node *n = new Node;
            n->item = newItem;
            n->next = top;
            top = n;
            count++;
        }
        void pop() {
            if (isEmpty()) {
                cout << "Invalid" << endl;
                return;
            } else {
                Node *temp = top;
                top = top->next;
                delete temp;
                count--;
            }
        }
};

// Stack SLL implementation
// Node* peek() {
//     return top;
// }