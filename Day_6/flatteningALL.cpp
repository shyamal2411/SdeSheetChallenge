#include<bits/stdc++.h> 
using namespace std;

class node {
    public:
        int num;
        node* next;
        node(int val) {
            num = val;
            next = NULL;
        }
};

Node* mergeTwoLists(Node* a, Node* b) {
    
    Node *temp = new Node(0);
    Node *res = temp; 
    
    while(a != NULL && b != NULL) {
        if(a->data < b->data) {
            temp->bottom = a; 
            temp = temp->bottom; 
            a = a->bottom; 
        }
        else {
            temp->bottom = b;
            temp = temp->bottom; 
            b = b->bottom; 
        }
    }
    
    if(a) temp->bottom = a; 
    else temp->bottom = b; 
    
    return res -> bottom; 
    
}
Node *flatten(Node *root)
{
   
        if (root == NULL || root->next == NULL) 
            return root; 
  
        // recur for list on right 
        root->next = flatten(root->next); 
  
        // now merge 
        root = mergeTwoLists(root, root->next); 
  
        // return the root 
        // it will be in turn merged with its left 
        return root; 
}

int main(){
    Node* head=new Node(1);
    head->next=new Node(2);
    head->next->next=new Node(3);
    head->next->next->next=new Node(4);
    head->next->next->next->next=new Node(5);
    // while(head!=NULL)
    // {
    //     cout<<head->val<<" ";
    //     head=head->next;
    // }
    cout<<endl<<endl;
    // ListNode* result=ss.middleofLL(head);
    // ListNode* result=ss.mergeTwoLists(head);
    // while(result!=NULL)
    // {
    //     cout<<result->val<<" ";
    //     result=result->next;
    // }
    Node* result=flatten(head);
    while(result!=NULL)
    {
        cout<<result->val<<" ";
        result=result->bottom;
    }
    return 0;
}