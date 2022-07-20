/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        
        if(head==NULL ||head->next==NULL)
            return NULL;
        
        ListNode *p,*q,*r;
        p=head;
        q=head;
        r=head;
       
        while(p->next && p->next->next)
        {
             q=q->next;
            p=p->next->next;
            
             if(p==q)
             {
               while(q!=r)
               {
                   q=q->next;
                   r=r->next;
               }
                 return r;
             }
        }
            
         return NULL;
        
    }
};