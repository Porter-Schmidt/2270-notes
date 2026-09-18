#include <iostream>
using namespace std;

// Pointers to Structs 

struct Student {
    string name;
    int age;
    Student * next; //!!!
};

int main() {

    Student *s0, *s1;
    s0 = new Student;
    s1 = new Student;

    s0->name = "Jenny";
    s0->age = 19;

    s1->name = "Archana";
    s1->age = 41;

    // Let's make the Jenny node point to the Archana node
    s0->next = s1;

    s1 = new Student;
    s1->name = "bill";
    s1->age = 83;
    s0->next->next = s1;
    s1->next = nullptr;
}

// Linked lists
struct Node{
    int key;
    Node* next;
};

int main() {
    int arr[] = {5, 12, 14, 17};
    int N = 4;

    Node *head, *previous, *temp;

    head = new Node;
    head->key = arr[0];
    head->next = nullptr;
    previous = head;

    for (int i = 1; i < N; i++) {
        temp = new Node;
        temp->key = arr[1];
        temp->next = nullptr;
        previous->next = temp;
        previous = temp;
    }
    return 0;
}