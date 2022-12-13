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
    ListNode* middleNode(ListNode* head) {
        
        if(head->next==NULL)return head;
        
        
        ListNode *fast=head;
        ListNode *slow=head;
        while(fast->next &&fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        
        
        return fast->next==NULL?slow:slow->next;
    }
};