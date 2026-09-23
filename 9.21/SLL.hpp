#include <iostream>
using namespace std;

class SLL {
    private:
        string key;
        Node *next;
    public:
        Node* search(string sKey) {
            Node* crawler = head;
            while (crawler->next != sKey) {
                crawler = crawler->next;
            }
            return crawler;
        }
};