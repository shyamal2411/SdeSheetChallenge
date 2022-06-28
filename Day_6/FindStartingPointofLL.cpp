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
  ListNode* detectCycle(ListNode* head){
      if(!head || !head->next)
        return NULL;

        ListNode* fast = head;
        ListNode* slow = head;
        ListNode* entry = head;

        while(fast -> next && fast -> next -> next){
            fast = fast -> next -> next;
            slow = slow -> next;
            if(fast == slow){
                while(slow != entry){
                    slow = slow -> next;
                    entry = entry -> next;
                }
                return entry;
            }
        }
        return NULL;
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
    ListNode* result=ss.detectCycle(head);
    if(result)
    {cout<<result->val<<" ";}
    else{cout<<"No cycle";}

return 0;
}