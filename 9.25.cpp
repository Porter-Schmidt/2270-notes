#include <iostream>
using namespace std;

SLL::~SLL() {
    Node* crawler;
    while (head != nullptr) {
        crawler = head->next;
        delete head;
        head = crawler;
    }
};

void SLL::deleteNode(string deleteKey) {
    // Check if deleteNode is head
    if (deleteKey == head->data) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    } else {
        // Stop at node prior the node to be deleted
        Node *prev, *crawler = head;
        bool found = false;
        // Find the previous node
        while (crawler != nullptr && !found) {
            if (crawler->key == deleteKey) {
                found = true;
            } else {
                prev = crawler;
                crawler = crawler->next;
            }
        }
    }
    if (found) {
        // reconnect the LL around the node about to be removed
        prev->next = crawler->next;
        // Deallocate
        delete crawler;
    } else {

    }
};

// Calculate performace and run time complexity
// Consider example:

int main() {
    int N = 10; // 1ms
    int a[N]; // 1ms

    int n = 0; // 1ms
    for (int i; i < N; i++) {

    }
}
// O(N) runtime complexity