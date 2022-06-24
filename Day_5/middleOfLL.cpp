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
    ListNode* middleofLL(ListNode* head){
        int count = 0;
        ListNode* temp = head;
        while(temp){
            temp=temp->next;
            count++;
        }
        temp = head;
        for(int i = 0; i < count/2; i++){ temp = temp -> next; }
        return temp;
    }
    ListNode* tortoiseHareApproach(ListNode* head){
        ListNode* slow = head, *fast = head;

        while(fast && fast -> next)
        slow = slow -> next, fast = fast -> next -> next;

        return slow;
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
    // ListNode* result=ss.middleofLL(head);
    ListNode* result=ss.tortoiseHareApproach(head);
    while(result!=NULL)
    {
        cout<<result->val<<" ";
        result=result->next;
    }
return 0;
}