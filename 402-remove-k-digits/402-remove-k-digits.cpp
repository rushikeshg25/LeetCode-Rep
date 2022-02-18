class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<char> stack;
        if(k == num.size()) return "0";
        int index = 0;
        while(index < num.size()){
            int n = stack.size();
            while(k && n && stack[n - 1] > num.at(index)){
                k--;
                stack.pop_back();
                n = stack.size();
            }
            stack.push_back(num.at(index++));
        }
        while(k-- > 0){
            stack.pop_back();
        }
        int n = stack.size();
        string small = "";
        while(!stack.empty()){
            small =  stack[n - 1] + small;
            n--;
            stack.pop_back();
        }
        while(small.size() > 1 && small[0] == '0'){
            small = small.substr(1);
        }
        return small;
    }
};