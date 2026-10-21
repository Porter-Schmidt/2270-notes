#include <iostream>
using namespace std;


Node* BST::deleteNode(Node* currNode, int value) {
    if (currNode == nullptr) {
        return nullptr;
    }
    else if (value < currNode->key) {
        currNode->left = deleteNodeHelper(currNode->left, value);
    }
    else if (value > currNode->key) {
        currNode->right = deleteNodeHelper(currNode->right, value);
    }
    else {
        // found it
        // case 1: no children
        if (currNode->left == nullptr && currNode->right == nullptr) {
            delete currNode;
            return nullptr;
        }
        // case 2: only a right child
        else if (currNode->left == nullptr) {
            Node* temp = currNode->right;
            delete currNode;
            return temp;
        }
        // case 3: only a left child
        else if (currNode->right == nullptr) {
            Node* temp = currNode->left;
            delete currNode;
            return temp;
        }

        // =================== Two Children ===================
        // case 4: two children
        else {
            Node* rsm = getMinValueNode(currNode->right);
            currNode->key = rsm->key;
            currNode->right = deleteNodeHelper(currNode->right, rsm->key);
        }
    }
}

// Something about rotating the tree
// Used for balancing the tree and fixing the tree after a deletion

Node* BST::rightRotate(Node* currNode) {
    Node* A = currNode->left;
    Node* beta = A->right;
    A->right = currNode;
    currNode->left = beta;
    return A;
}
Node* BST::leftRotate(Node* currNode) {
    Node* B = A->right;
    Node* beta = B->left;
    A->right = beta;
    B->left = A;
    return B;
}