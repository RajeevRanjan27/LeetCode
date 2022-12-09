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
     ListNode* getNodeat(int idx,ListNode* head)
        {
            ListNode* t=head;
            for(int i=0;i<idx && t;i++)
            {
                t=t->next;
                
            }
            return t;
            
        }
    ListNode* reverseList(ListNode* head) {
//        ListNode *curr=NULL;
//         while(head)
//         {
//             ListNode *next=head->next;
//             head->next=curr;
//             curr=head;
//             head=next;
            
//         }
//         return curr;
        
//         ListNode *curr=NULL;
//         while(head)
//         {
//             ListNode *next=head->next;
            
//         }
       
        ListNode* l1=head;
        
        
        int ri=0;
        int li=0;
        int s=0;
        
        
        while(l1)
        {
            s++;
            l1=l1->next;
            
        }
        ri=s-1;
        
           
        
        while(li<ri)
        {
    
       ListNode* left=getNodeat(li,head);
       ListNode* right=getNodeat(ri,head);
            
        int temp=left->val;
            left->val=right->val;
            right->val=temp;
            
            li++;
            ri--;
            
        }
        
        return head;
        
        
        
    }
};