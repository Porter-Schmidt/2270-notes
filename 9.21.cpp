#include <iostream>
#include <string>
// #include "SLL.hpp"
using namespace std;



int main() {


}
struct Node {
    string key;
    Node *next;
};

class SLL {
    private: 
        Node *head;
    public:
    SLL(); // Constructor
    ~SLL(); // Deconstructor

    Node* search(string sKey) {
        Node* crawler = head;
            while (crawler != nullptr && crawler->key != sKey) {
                crawler = crawler->next;
            }
            return crawler;
    }

    void displayList();

    void insert(string afterMe, string newValue) {
        // 1> Empty List
        if (head == nullptr) {
            head = new Node;
            head->key = newValue;
            head->next = nullptr;
        }

        // 2> List not empty, user wants to insert the new node at the beginning of list
        else if (afterMe == "") {
            Node* newNode = new Node;
            newNode->key = newValue;
            newNode->next = head;
            head = newNode;

        }

        //3) List is not empty, new node the user indicates (using prev)
        else {
            Node *crawler  = head;
            bool found = false;
            while (crawler != nullptr && !found) {
                if (crawler->key == afterMe) {
                    found = true;
                } else {
                    crawler = crawler->next;
                }
            }
            if (found) {
                Node* newNode = new Node;
                newNode->key = newValue;
                newNode->next = crawler->next;
                crawler->next = newNode;


            } else {
                cout << "Cannot add new Node" << endl;
            }
        }
        
        // Option 2 I guess
        // else {
        //     Node* prevNode = search(afterMe);
        //     if (prevNode == nullptr) {
        //         cout << "The node with key " << afterMe << " was not found in the list." << endl;
        //         return;
        //     }
        //     Node* newNode = new Node;
        //     newNode->key = newValue;
        //     newNode->next = prevNode->next;
        //     prevNode->next = newNode;
        // }
    }

    void deleteNode(Node* deleteNode); // 9.25.cpp.

};

