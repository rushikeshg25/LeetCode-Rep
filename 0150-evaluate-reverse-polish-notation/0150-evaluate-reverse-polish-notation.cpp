class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<long int> s;
        int n=tokens.size();
       for(int i=0;i<n;i++)
       {
           if(tokens[i]=="+" || tokens[i]=="-" ||tokens[i]=="/"||tokens[i]=="*")
           {
               long int b=s.top(); s.pop();
               long int a=s.top(); s.pop();
               if(tokens[i]=="+") s.push(a+b);
               else if(tokens[i]=="-") s.push(a-b);
               else if(tokens[i]=="*") s.push(a*b);
               else if(tokens[i]=="/") s.push(a/b);
           }
           else
           s.push(stoi(tokens[i]));
       } 
       return s.top();
    }
};