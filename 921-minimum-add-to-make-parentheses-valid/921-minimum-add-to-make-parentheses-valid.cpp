class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>a;
        for(auto i:s)
        {
            if(i=='(') a.push('(');
            else {
                if(!a.empty() && a.top()=='(') 
                    a.pop();
                else
                    a.push(')');
                
            }
        }
        return a.size();
    }
};