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
    ListNode* deleteDuplicates(ListNode* head) {
//       if(head==NULL||head->next==NULL)return head;
        
        
//         ListNode *p=head->next,*q=head;
//         int prev=q->val;
//         while(p)
//         {
//             if(p->val!=prev)
//             {
//                 q->next=p;
//                // p=p->next;
//                 q=q->next;
//                 prev=p->val;
                
//             }
//             p=p->next;
            
//         }
//         q->next=NULL;
//         return head;
        
        if(head==NULL)return head;
        
        ListNode *temp=head;
        ListNode *res=new ListNode(temp->val);
        ListNode *last=res;
        temp=temp->next;
        
        
        while(temp){
              
         if(temp->val!=last->val)
            
         {
             last->next=new ListNode(temp->val);
             last=last->next;
         }
            
            temp=temp->next;  
       
        }   
        
        return res;
        
        
    }
};