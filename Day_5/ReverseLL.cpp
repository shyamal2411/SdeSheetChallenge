#include<bits/stdc++.h> 
using namespace std;

typedef vector<int> vi;
typedef vector<string> vst;

struct ListNode {
int val;
ListNode *next;
ListNode() : val(0), next(nullptr) {}
ListNode(int x) : val(x), next(nullptr) {}
ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
public:
    ListNode* reverseListIterative(ListNode* head){
    ListNode* prev = NULL;

    while(head != NULL){
        ListNode* next_node = head->next;
        head->next = prev;
        prev = head;
        head = next_node;
    }
    return prev;
    }
    ListNode* reverseListRecursion(ListNode* head){
        if(head == NULL || head -> next == NULL)
        return head;

        ListNode* next_node = reverseListRecursion(head->next);
        head->next->next = head;
        head -> next = NULL;
        return next_node;
    }
};

int main(){
Solution ss;
// vector<int> vec = {};
ListNode* head=new ListNode(1);
    head->next=new ListNode(2);
    head->next->next=new ListNode(3);
    head->next->next->next=new ListNode(4);
    head->next->next->next->next=new ListNode(5);
    // while(head!=NULL)
    // {
    //     cout<<head->val<<" ";
    //     head=head->next;
    // }
    cout<<endl<<endl;
    ListNode* result=ss.reverseListRecursion(head);
    while(result!=NULL)
    {
        cout<<result->val<<" ";
        result=result->next;
    }
return 0;
}