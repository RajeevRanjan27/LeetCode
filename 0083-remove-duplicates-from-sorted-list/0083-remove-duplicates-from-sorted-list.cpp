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
        
        
        //method 1
    // using two pointers and one prev value counter, keep traversing until u meet the diiferent val of p node from prev val
        
        
        
if(head==NULL ||head->next==NULL)return head;
       ListNode *p=head, *q=head->next;
        int prev=p->val;
        
        
        while(q)
        {
            if(q->val!=prev)
            {
                p->next=q;
                p=p->next;
                prev=q->val;
                
            }
            
            q=q->next;
        }
        p->next=NULL;
        return head;
        
        
        //method2
        //by using another list and keep adding them if they  are different otherwise skip it
        
        
//         if(head==NULL)return head;
        
//         ListNode *temp=head;
//         ListNode *res=new ListNode(temp->val);
//         ListNode *last=res;
//         temp=temp->next;
        
        
//         while(temp){
              
//          if(temp->val!=last->val)
            
//          {
//              last->next=new ListNode(temp->val);
//              last=last->next;
//          }
            
//             temp=temp->next;  
       
//         }   
        
//         return res;
        
        
        
        
    }
};