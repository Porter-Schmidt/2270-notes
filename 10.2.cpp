#include <iostream>
using namespace std;

/* Queue Items:
- Initialize() - Constructor: create an empty queue - 0(1)
- isEmpty() - True if the queue has no elements - 0(1)
- isFull() - True if no more room (bounded queues only) - 0(1)
- enqueue(item) - Add an item at the tail - 0(1)
- dequeue() - Remove (and return) an item from the head - 0(1)
- peek() - Return the item at the head without removing it (optional) - 0(1)
*/

struct Node {
    string item;
    Node *next;
};

class QueueLL {
    private:
        Node *head, *tail;
        int queSize;
    public:
        QueueLL() { head = tail = nullptr; queSize = 0; }
        ~QueueLL() {
            while (!isEmpty()) {
                dequeue();
            }
        }
        bool isEmpty() {
            return head == nullptr;
        }
        void enqueue(string newItem) {
            Node *n = new Node;
            n->item = newItem;
            n->next = nullptr;
            if (isEmpty()) {
                head = tail = n;
            } else {
                tail->next = n;
                tail = n;
            }
            queSize++;
        }
        string dequeue() {
            if(isEmpty()) {
                cout << "Empty" << endl;
                return ""; // return empty string
            }
            Node *temp = head;
            string item = head->item;
            if (head == nullptr) {
                tail = nullptr;
            }
            delete temp;
            queSize--;
            return item;
        }
};

// Common bug:
// if (head == nullptr) tail = nullptr; in dequeue()
// Afther the last item leaves, tail still points to somethin idk i didnt get enough time to copy the rest


// Circular Array Queue:
// Let both head and tail move when we enqueue and dequeue. When an idnex runs off the end of the arrau, ot wraps around to 0;
// - head = index of the front item
// - tail = index where the next item will go
// - index = (index + 1) % MAXSIZE; // advance with wrap-around
// * same as: if(index == MAXSIZE - 1) index = 1; else index++;

