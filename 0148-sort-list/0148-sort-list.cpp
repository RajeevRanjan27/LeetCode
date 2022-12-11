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
private:
     ListNode *findmid(ListNode* head)
    {
        ListNode *slow=head,*fast=head->next;
        while(fast!=NULL&& fast->next!=NULL)

        {
            slow=slow->next;
            fast=fast->next->next;
            
        }
        return slow;
        
    }
    
    
    ListNode* merge(ListNode* l1, ListNode* l2)
    {
        ListNode *prehead=new ListNode(0);
        ListNode *last=prehead;
        while(l1 && l2)
        {
            if(l1->val>l2->val)
            {
                last->next=l2;
                l2=l2->next;
                
            }
            else{
                last->next=l1;
                l1=l1->next;
                
            }
            last=last->next;
            
        }
        if(l1)
        {
            last->next=l1;
            
        }
        else{
            last->next=l2;
            
        }
        
        return prehead->next;
      
    }
    
    
public:
    
    ListNode* sortList(ListNode* head) {
      
        
        if(head==NULL ||head->next==NULL)
        {
            return head;
        }
        
        ListNode *mid=findmid(head);
        
        ListNode*left=head;
        ListNode*right=mid->next;
        mid->next=NULL;
        
        left=sortList(left);
        right=sortList(right);
        
        ListNode*result= merge(left,right);
        return result;
        
    }
};
    

// class Solution {

// private:
   
//     ListNode* merge(ListNode*left,ListNode*right){
//         if(left==NULL){
//             return right;
//         }
//         if(right==NULL){
//             return left;
//         }
//         ListNode*ans=new ListNode(-1);
//         ListNode* temp=ans;
//         while(left!=NULL&&right!=NULL){
//             if(left->val <right->val){
//                 temp->next=left;
//                 temp=left;
//                 left=left->next;
//             }
//             else{
//                 temp->next=right;
//                 temp=right;
//                 right=right->next;
//             }
//         }
//         while(left!=NULL){
//             temp->next=left;
//             temp=left;
//             left=left->next;
//         }
//         while(right!=NULL){
//             temp->next=right;
//             temp=right;
//             right=right->next;
//         }
//         ans=ans->next;
//         return ans;
//     }

// public:
//     ListNode* sortList(ListNode* head) {
//         // base case
//         if(head==NULL ||head->next==NULL ){
//             return head;
//         }
//         //finding mid of linked list

//         ListNode* mid=findMid(head);

//         //divide linked list in two half
//         ListNode*left=head;
//         ListNode*right=mid->next;
//         mid->next=NULL;

//         //merge two list
//         left=sortList(left);
//         right=sortList(right);

//         //merge both left and right
//         ListNode*result=merge(left,right);

//         return result;


//     }
// };