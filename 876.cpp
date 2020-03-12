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
    ListNode* middleNode(ListNode* head) {
        int a[1000],i=0;
        ListNode *h=(ListNode *) malloc(sizeof(ListNode));
        h=head;
        while(head)
        {
            a[i++]=head->val;
            head=head->next;
        }
        i/=2;
      while(i--)
          h=h->next;
        return h;
        
    }
};
