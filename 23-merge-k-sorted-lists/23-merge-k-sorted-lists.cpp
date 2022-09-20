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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        priority_queue<int>pq;
        for(auto x:lists)
        {
            while(x)
            {
                pq.push(x->val);
                x=x->next;
            }
        }
        // while(!pq.empty())
        // { cout<<pq.top();
        //      pq.pop();
        // }
        
        int n=pq.size();
        
        ListNode *last = NULL;
        ListNode *p1 = NULL;
        
        
        
        for(int i=0;i<n;i++)
        {
       
           // int tp= pq.top();
           // pq.pop();
        
        
            ListNode *temp = new ListNode();
            temp->val = pq.top();
            pq.pop();
            temp->next = NULL;
            
            if(last == NULL){
                last = temp;
                p1 = temp;
                
                
            }
            else{
                temp->next = p1;
                p1 = temp;
            }
       
             
        }
        
        
        
        
        return p1;
        
    }
};