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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *h1=headA;
        ListNode *h2=headB;
        int a=0,b=0;
        while(h1)
        {
            h1=h1->next;
            a++;
            
        }
        while(h2)
        {
          h2=h2->next;
            b++;
        }
        int diff=abs(a-b);
        h1=headA;
        h2=headB;
        if(a>b)
        {
           while(diff)
           {
               h1=h1->next;
               diff--;
           }
            while(h1!=h2)
            {
               h1=h1->next;
                h2=h2->next;
            }
        }
        else
        {
            while(diff)
           {
               h2=h2->next;
               diff--;
           }
            while(h1!=h2)
            {
               h1=h1->next;
                h2=h2->next;
            }
        }
        return h1;
        
    }
};