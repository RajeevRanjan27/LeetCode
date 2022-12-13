/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    
    ListNode *findmid(ListNode *head){
        ListNode *slow=head;
        ListNode *fast=head;
       while(fast->next&&fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        
        }
        
        return slow; 
    }
    
    ListNode *reverselist(ListNode *head)
    {
        ListNode *curr=head, *prev=NULL, *fwd=NULL;
        while(curr)
        {
            fwd=curr->next;
            curr->next=prev;
            prev=curr;
            curr=fwd;
            
        }
        
        return prev;
        
    }
    
    bool isPalindrome(ListNode* head) {
        
        
        
        if(head->next==NULL)return true;
        
        ListNode *l1=head;
        ListNode *l2=findmid(head);
        ListNode *l3=reverselist(l2->next);
        l2->next=NULL;
        
        while(l3!=NULL &&l1!=NULL)
        {
            if(l1->val!=l3->val)
            {
                return false;
            }
            else{
                l1=l1->next;
                l3=l3->next;
                
            }
           
        }
                   
           
            return true;
          
    }
};