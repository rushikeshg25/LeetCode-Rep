class Solution {
public:
    int ladderLength(string src, string dst, vector<string>&A) {
        unordered_set<string>S;
        unordered_set<string>V;
        queue<pair<string,int>>q;
        for(string a : A)
            S.insert(a);
        q.push( {src,1} );
        V.insert(src);
        while(!q.empty())
        {
            pair<string,int>node = q.front();
            q.pop();
            string cur = node.first;
            if(cur == dst)
                return node.second;
            for(int j = 0; j < cur.length(); j++)
            {
                char cur_char = cur[j]; 
                for(int i = 0; i < 26; i++)
                {
                    
                    cur[j] = 'a' + i;
                    if(S.find(cur) != S.end() and V.find(cur) == V.end())
                    {
                        V.insert(cur);
                        q.push({cur,node.second + 1});
                    }

                }
                cur[j] = cur_char;
            }
        }
        return 0;
        
        
    }
};