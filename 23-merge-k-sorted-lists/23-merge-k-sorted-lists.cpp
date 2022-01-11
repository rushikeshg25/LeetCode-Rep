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
struct compare {
    bool operator()(const ListNode* l, const ListNode* r) {
        return l->val > r->val;
    }
};

class Solution {
public:
    
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty()) return NULL;
        priority_queue<ListNode*,vector<ListNode*>,compare>q;
        for(auto i:lists)
        {
            if(i)
            q.push(i);
        }
        //if(q.empty()) return NULL;
        ListNode*dummy=new ListNode(-1);
        ListNode*temp=dummy;
        while(!q.empty())
        {
            temp->next=q.top();
            q.pop();
            temp=temp->next;
            if(temp->next)
                q.push(temp->next);
        }
        return dummy->next;
    }
};