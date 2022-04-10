class Solution {
public:
    int calPoints(vector<string>& ops) {
        stack<int> st;
        for(int i=0;i<ops.size();i++){
            if(ops[i]=="C"){
                st.pop();
            }
            else if(ops[i]=="D"){
                st.push(st.top()*2);
            }
            else if(ops[i]=="+"){
                int num1=st.top();
                st.pop();
                int num2=st.top();
                st.push(num1);
                st.push(num1+num2);
            }
            else{
                st.push(stoi(ops[i]));
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};