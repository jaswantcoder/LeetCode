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
    ListNode* oddEvenList(ListNode* head) {
      ListNode * odd, *ev,*r1,*r2;
       if(!head)
           return NULL;
        odd=new ListNode;
        ev=new ListNode ;
        odd->next=NULL;
        ev->next=NULL;
        r1=odd;
        r2=ev;
        int s=1;
        while(head!=NULL)
        {
            if(s)
               { r1->next=head; r1=r1->next;}
        else
        {
            r2->next=head; r2=r2->next;
        }
            s^=1;
     //     cout<<  head->val<<" ";
    
            head=head->next;
        }
     //   cout<<odd->next->val;
        r1->next=NULL;
        r2->next=NULL;
         r1->next=ev->next;
        ListNode * r= ev->next;
        int i=0;
     /*   while(r)
        {
            cout<<r->val<<" d"<<i<<" ";
            r=r->next;
            i++;
        }
        */
        return odd->next;    
    }
};
