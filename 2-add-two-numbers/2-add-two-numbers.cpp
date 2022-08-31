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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode ans(0),* temp= &ans;;
       
        ListNode * a;
        ListNode * b;
       
        a=l1;
        b=l2;
        int n=0,sum=0;
        while(a && b)
        {
            
           
            sum=(a->val+b->val +n);
            n=sum/10; 
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            a=a->next;
            b=b->next;
        }
        
        while(a!=NULL)
        {
            
            
             sum=(a->val+n);
            n=sum/10; 
            temp->next=new ListNode(sum%10);
             temp=temp->next;
            a=a->next;
            
        }
        while(b!=NULL)
        {
            sum=(b->val+n);
            n=sum/10; 
            temp->next=new ListNode(sum%10);
            temp=temp->next;
            b=b->next;
        }
        if(n)
        {
            temp->next =new ListNode(n);
            temp=temp->next;
        }
        temp=NULL;
        
        
        
        
        return ans.next;
        
//         ListNode ans(0), *temp=&ans;
//         ListNode *a=l1,*b=l2;
//         int carry=0,sum=0;
        
//         while(a&&b)
//         {
//             sum=a->val+b->val+carry;
//             carry=sum/10;
//             temp->next=new ListNode(sum%10);
//             temp=temp->next;
//             a=a->next;
//             b=b->next;
            
//         }
//         while(a!=NULL)
//         {
//             sum=a->val+carry;
//             carry=sum/10;
//             temp->next=new ListNode(sum%10);
//             temp=temp->next;
//             a=a->next;
            
//         }
//         while(b!=NULL)
//         {
//             sum=b->val+carry;
//             carry=sum/10;
//             temp->next=new ListNode (sum%10);
//             temp=temp->next;
//             b=b->next;
//         }
//         if(carry)
//         {
//             temp->next=new ListNode(carry);
//             temp=temp->next;
            
//         }
//         temp=NULL;
        
//         return ans.next;
            
        
        
    }
};