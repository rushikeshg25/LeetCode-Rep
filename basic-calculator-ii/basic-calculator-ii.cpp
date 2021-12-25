class Solution {
public:
    int calculate(string s) {
        int result = 0, cur_res = 0;
        char op = '+';
        for(int pos = s.find_first_not_of(' '); pos < s.size(); pos = s.find_first_not_of(' ', pos)) {
            if(isdigit(s[pos])) {
                int tmp = s[pos] - '0';
                while(++pos < s.size() && isdigit(s[pos]))
                    tmp = tmp*10 + (s[pos] - '0');
                switch(op) {
                    case '+' : cur_res += tmp; break;
                    case '-' : cur_res -= tmp; break;
                    case '*' : cur_res *= tmp; break;
                    case '/' : cur_res /= tmp; break;
                }
            }
            else {
                if(s[pos] == '+' || s[pos] == '-') {
                    result += cur_res;
                    cur_res = 0;
                }
                op = s[pos++];
            }
        }
        return result + cur_res;
    }
};