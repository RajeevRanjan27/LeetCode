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
      if(head==NULL||head->next==NULL)return head;
        
        
        ListNode *p=head->next,*q=head;
        int prev=q->val;
        while(p)
        {
            if(p->val!=prev)
            {
                q->next=p;
               // p=p->next;
                q=q->next;
                prev=p->val;
                
            }
            p=p->next;
            
        }
        q->next=NULL;
        return head;
        
//           if(head==NULL)return  head;
//         // ListNode *p=head,*t=head->next;
//         // int pre=head->val;
//         // while(t!=NULL)
//         // {
//         //     if(pre!=t->val)
//         //     {
//         //         p->next=t;
//         //         pre=t->val;
//         //         t=t->next;
//         //     }
//         //     t=t->next;
//         // }
//         // p->next=NULL;
//         // return head;
        
//         ListNode *p=head,*q=head->next;
        
//         int prev=head->val;
//         while(q)
//         {
//             if(prev!=q->val)
//             {
//                 p->next=q;
//                 prev=q->val;
//                 p=p->next;
//             }
//             q=q->next;
//         }
//        p->next=NULL;
        
//         return head;
        
        
    }
};