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
    bool isPalindrome(ListNode* head) {
        if(head->next==NULL || head==NULL)
            return true;
            
        ListNode* fast=head; //assign both pointers to head, not null!!!
        ListNode* slow=head;
        
         while (fast->next != NULL && fast->next->next != NULL) {
            slow=slow->next;
            fast=fast->next->next;
        }//approaching mid element.
        
        
        slow->next=reverseLL(slow->next); //now reverse the LL part from slow's next to last node
        slow=slow->next;//after reversing move slow to next node.
        while(slow!=NULL)//now go on checking if the values of reversed part and the nodes from head matches of not, if they doesn't match at any point return false and abort.
        {
            if(head->val!=slow->val)
                return false;
            
            head=head->next;//go on iterating both the nodes
            slow=slow->next;
        }
        return true;
    }
    
    ListNode* reverseLL(ListNode* head) //reversing LL process.
    {
        ListNode* prev=NULL;
        ListNode* next=NULL;
        
        while(head!=NULL)
        {
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
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
    
    cout<<endl<<endl;
    if(ss.isPalindrome(head))
    cout<<"true\n";
    else
    cout<<"false\n";
    return 0;
    // while(result!=NULL)
    // {
    //     cout<<result->val<<" ";
    //     result=result->next;
    // }
}