#include <iostream>
using namespace std;

struct Node {
    int key;
    Node* leftChild;
    Node* rightChild;
};

Node* search(int key) {
    Node* crawler = root;
    while (crawler != nullptr && crawler->key != key) {
        if (key < crawler->key) {
            crawler = crawler->leftChild;
        } else {
            crawler = crawler->rightChild;
        }
        return crawler; // nullptr if not found
    }
};

class BST {
    private:
        Node* root;
        void insertHelper(Node*, value);
        void searchHelper(Node*, value);
        void deleteHelper(Node*, value);
        int  getMinValue(Node*);
        int getMaxValue(Node*);
        void destroySubtree(Node*);
    public:
        BST() {}
        insert (value) {}
        search (value) {}
        delete (value) {}
        disp() {}
        ~BST() // Delete tree

        void printInOrder(Node* currNode);
 };

 // Pre-order traversal: root, left, right - Best for making a tree
 // In-order traversal: left, root, right - idfk man
 // Post-order traversal: left, right, root -  Best for deleting a tree

void BST::printInOrder(Node* currNode) { // Post-order printing, swap left and right for pre-order printing
    if (currNode == nullptr) {
        return;
    }
    printInOrder(currNode->leftChild);
    cout << currNode->key << " ";
    printInOrder(currNode->rightChild);
}

// Pre-order: Good for coping or saving a tree
// In-order: Good for printing a tree in sorted order
// Post-order: Good for deleting a tree

