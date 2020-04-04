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
    ListNode* deleteDuplicates(ListNode* head) {
    
        ListNode* h= head;
        if(h==NULL)
            return h;
        while(h->next)
        {
            if(h->next->val==h->val)
            {
               h->next=h->next->next;
            }
            else
                h=h->next;
        }
        return head;
        
    }
};
