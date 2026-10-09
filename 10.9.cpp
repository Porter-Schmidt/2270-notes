#include <iostream>
using namespace std;

void printInOrder(Node* currNode) { // Post-order printing, swap left and right for pre-order printing
    if (currNode == nullptr) {
        return;
    }
    printInOrder(currNode->leftChild);
    cout << currNode->key << " ";
    printInOrder(currNode->rightChild);
}

Node* insertHelpter(Node* currNode, int data) {
    // Case 1: empty spot (or empty tree)
    if (currNode == nullptr) {
        return createNode(data);
    }
    // Case 2: data >= key, go right
    else if (data >= currNode->key) {
        currNode->rightChild = insertHelpter(currNode->rightChild, data);
        currNode->rightChild->parent = currNode;
    }
    // Case 3: data < key, go left
    else { 
        currNode->leftChild = insertHelpter(currNode->leftChild, data);
        currNode->leftChild->parent = currNode;
    }
    return currNode;
}

// Parent pointer
struct Node {
    int key;
    Node* parent = nullptr;
    Node* leftChild = nullptr;
    Node* rightChild = nullptr;};