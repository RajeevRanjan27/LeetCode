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

    ListNode* reverseList(ListNode* head) {

        
        if(head==NULL||head->next==NULL)return head;   //handelling corner cases;
        ListNode *prev=NULL,*fwd=NULL;
        ListNode *curr=head;
        
     while(curr)
        { 
        fwd=curr->next; //backup
        curr->next=prev; //creating link
        prev=curr;   //moving ptrs
        curr=fwd;     //moving ptrs
        }
        return prev;
        
        
        
    }
};