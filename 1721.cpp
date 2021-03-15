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
    ListNode* swapNodes(ListNode* head, int k) {
        if(!head)
            return NULL;
    ListNode* p1= head;
        ListNode *p2 = head;
        ListNode* p3;
        while(--k)
        {
            p2=p2->next;
      
        }
        
        p3=p2;
       
        while(p2->next)
        {
            p1=p1->next;
            p2=p2->next;
        }
        
         if(p3==p1)
            return head;
        cout<<p3->val<<" "<<p1->val<<endl;
        p3->val=p3->val+p1->val;
        p1->val =p3->val - p1->val;
        p3->val = p3->val -p1->val;
        
        return head;
        
    }
};
