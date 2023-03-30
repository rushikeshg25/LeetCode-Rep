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
        if(!head) return head;
        ListNode*prev=NULL,*cur=head,*fr=head->next;
        
        while(fr){
            cur->next=prev;
            prev=cur;
            cur=fr;
            fr=fr->next;
        }
        cur->next=prev;
        return cur;
    }
};