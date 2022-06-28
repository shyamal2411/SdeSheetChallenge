#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

// struct ListNode {
// int val;
// ListNode *next;
// ListNode() : val(0), next(nullptr) {}
// ListNode(int x) : val(x), next(nullptr) {}
// ListNode(int x, ListNode *next) : val(x), next(next) {}
// };


class ListNode {
    public:
        int num;
        ListNode* next;
        ListNode(int val) {
            num = val;
            next = NULL;
        }
};
//utility function to insert ListNode at the end of the linked list
void insertNode(ListNode* &head,int val) {
    ListNode* newNode = new ListNode(val);
    
    if(head == NULL) {
        head = newNode;
        return;
    }
    
    ListNode* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}

    ListNode* intersectionPresent(ListNode* head1,ListNode* head2) {
    while(head2 != NULL) {
        ListNode* temp = head1;
        while(temp != NULL) {
            //if both nodes are same
            if(temp == head2) return head2;
            temp = temp->next;
        }
        head2 = head2->next;
    }
    //intersection is not present between the lists return null
    return NULL;
}

void printList(ListNode* head) {
    while(head->next != NULL) {
        cout<<head->num<<"->";
        head = head->next;
    }
    cout<<head->num<<endl;
}

int main(){
     ListNode* head = NULL;
    insertNode(head,1);
    insertNode(head,3);
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,4);
    ListNode* head1 = head;
    head = head->next->next->next;
    ListNode* headSec = NULL;
    insertNode(headSec,3);
    ListNode* head2 = headSec;
    headSec->next = head;
    //printing of the lists
    cout<<"List1: "; printList(head1);
    cout<<"List2: "; printList(head2);
    //checking if intersection is present
    ListNode* answerNode = intersectionPresent(head1,head2);
    if(answerNode == NULL )
    cout<<"No intersection\n";
    else
    cout<<"The intersection point is "<<answerNode->num<<endl;
return 0;
}