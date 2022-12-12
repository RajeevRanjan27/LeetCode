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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
      // ListNode*p=head,*q;
      //   int count=0;
      //  while(p)
      //  {
      //      count++;
      //      p=p->next;
      //  }
      //   p=head;
      //   q=NULL;
      //   if(count==n)
      //   {
      //       head=p->next;
      //       return head;
      //   }
      //   else{
      //   for(int i=1;i<=count-n;i++)
      //   {
      //       q=p;
      //       p=p->next;
      //   }
      //   q->next=p->next;
      //   return head;
      //   }
        
       ListNode *prehead=new ListNode(0);
        ListNode *temp=prehead,*slow=prehead;
        temp->next=head;
        
        for(int i=0;i<n+1;i++)
        {
            temp=temp->next;
            
        }
        while(temp)
        {
            temp=temp->next;
            slow=slow->next;
            
            
        }
        slow->next=slow->next->next;
        
        
        
        return prehead->next;
        
    }
};