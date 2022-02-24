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
    ListNode* sortList(ListNode* head) {
       vector<int>a;
        while(head){
            a.push_back(head->val);
            head=head->next;
        }
        sort(a.begin(),a.end());
        int i=0;
        ListNode*ans=new ListNode(-1);
        ListNode*temp=ans;
        while(i<a.size()){
            temp->next=new ListNode(a[i]);
            temp=temp->next;
            i++;
        }
        return ans->next;
    }
};