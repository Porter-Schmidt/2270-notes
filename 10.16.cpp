#include <iostream>
using namespace std;

Node* insertHelper(Node* currNode, int data) {
    // Case 1: empty spot (or empty tree)
    if (currNode == nullptr) {
        return createNode(data);
    }

    // Case 2: data >= key, go right
    if (data >= currNode->data) {
        currNode->right = insertHelper(currNode->right, data);
    }

    // Case 3: data < key, go left
    else {
        currNode->left = insertHelper(currNode->left, data);
    }
}

Node* searchKeyHelper(Node* currNode, int key) {
    // Case 1: empty spot (or empty tree)
    if (currNode == nullptr) {
        return nullptr;
    }

    // Case 2: key found
    if (key == currNode->data) {
        return currNode;
    }

    // Case 3: key > data, go right
    if (key > currNode->data) {
        return searchKeyHelper(currNode->right, key);
    }

    // Case 4: key < data, go left
    else {
        return searchKeyHelper(currNode->left, key);
    }
}

Node* getMinValueNode(Node* currNode) {
    Node* temp = currNode;

    while (temp && temp->left != nullptr) {
        temp = temp->left;
    }

    return temp;
}
Node getMaxValueNode(Node* currNode) {
    Node* temp = currNode;

    while (temp && temp->right != nullptr) {
        temp = temp->right;
    }

    return temp;
}