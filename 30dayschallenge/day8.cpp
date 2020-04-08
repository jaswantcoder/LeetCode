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
        int i=0;
        ListNode* a[100000]={NULL};
        while(head)
        {
            a[i++]=head;
            head=head->next;
        }
  return a[i/2];
        
    }
};
