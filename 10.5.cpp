#include <iostream>
using namespace std;


const int MAX_SIZE = 5;

class QueArrCir {
    private:
        int head, tail, queSize;
        string a[MAX_SIZE];
    public:
        QueArrCir() {
            head = 0;
            tail = 0;
            queSize = 0; // keep current count
        }

        bool isEmpty() {
            return queSize == 0;
        }
        bool isFull() {
            return queSize == MAX_SIZE;
        }
        void enqueue(string newItem) { 
            if (!isFull()) {
                a[tail] = newItem;
                queSize++;
                if (tail == MAX_SIZE - 1) {
                    tail = 0;
                } else {
                    tail++;
                }
            } else {
                cout << "queue is full - cannot enqueue" << endl;

            }
        }
        string deque() {
            if (isEmpty()) {
                cout << "queue is empty" << endl;
                return "";
            }
            string item = a[head];
            queSize--;
            if (head == MAX_SIZE - 1) {
                head = 0;
            } else {
                head++;
            }
            return item;
        }
};

// Binary Search trees
/* Vocab for ya
- Node: one element (A through I)
- Edge: the link between two nodes
- Root: the one node with no parent (A)
- Parent/child: D is the parent of G, H, I
- Leaf: a node with no children (C, E, F, G, H, I)
- Subtree: a node plus everthing betow it (B, E, F)
*/

// For every node in the tree:
// Every key in the left subtree is less than the nodes key
// Every key in the right subtree is greater than or equal to the nodes key

// Height h = edges on the longest root to leaf path.