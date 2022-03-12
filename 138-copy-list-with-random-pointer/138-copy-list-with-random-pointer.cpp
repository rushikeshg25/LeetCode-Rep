/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {

public:

Node* copyRandomList(Node* head) {
      
    unordered_map<Node*, Node*>m;
    Node *back = NULL, *curr, *_head = NULL, *temp = head;
    
    while(head){
        curr = new Node(head->val);
        if(!_head){
            _head = back = curr;
        }
        else{
            back->next = curr;
            back = curr;
        }
        m[head] = curr;
        head = head->next;
    }
    head = _head;
    
    while(head){
        head->random = m[temp->random];
        head = head->next;
        temp = temp->next;
    }
	
    return _head;      
}
};