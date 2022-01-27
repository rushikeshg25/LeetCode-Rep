class Solution {
public:
    struct Trie{
        Trie *child[2];
    };
    void insert(Trie *root, int val){
        Trie *cur = root;
        for(int i=31; i>=0; --i){
            int mask = 1<<i;
            int bit = (mask & val) ? 1 : 0;
            if(cur->child[bit] == NULL) cur->child[bit] = new Trie();
            cur=cur->child[bit];
        }
    }
        int search(Trie *root, int find){
        Trie *cur = root;
        int val = 0;
        for(int i=31; i>=0; --i){
            int mask = 1<<i;
            int bit = (mask & find) ? 0 : 1;
            if(bit == 0){
                if(cur->child[0]){
                    cur=cur->child[0];
                    val |= mask;
                }else{
                    cur=cur->child[1];
                }
            }else{
                if(cur->child[1]){
                    cur=cur->child[1];
                    val |= mask;
                }else{
                    cur=cur->child[0];
                }
            }
        }
        return val;
    }
    
    int findMaximumXOR(vector<int>& nums) {
        Trie *root = new Trie();
        for(auto &e : nums) insert(root,e);
        
        int maxN = 0;
        for(auto &e : nums) maxN = max(maxN, search(root,e));
        return maxN;
    }
};