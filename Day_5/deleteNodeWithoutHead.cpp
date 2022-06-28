#include<iostream>
using namespace std;

class node {
    public:
        int num;
        node* next;
        node(int a) {
            num = a;
            next = NULL;
        }
};

void insertNode(node* &head,int val) {
    node* newNode = new node(val);
    if(head == NULL) {
        head = newNode;
        return;
    }
    node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}


node* getNode(node* head,int val) {
    while(head->num != val) head = head->next;
    
    return head;
}

void deleteNode(node* t) {
    t->num = t->next->num;
    t->next = t->next->next;
    return;
}


void printList(node* node) {
    while(node->next != NULL) {
        cout<<node->num<<"->";
        node = node->next;
    }
    cout<<node->num<<"\n";
}

int main() {
    node* head = NULL;
    insertNode(head,1);
    insertNode(head,4);
    insertNode(head,2);
    insertNode(head,3);

    cout<<"Given Linked List:\n";
    printList(head);
    node* t = getNode(head,2);

    deleteNode(t);

    cout<<"Linked List after deletion:\n";
    printList(head);

    return 0;
}