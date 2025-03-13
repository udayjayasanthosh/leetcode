class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;
        for(const char& x : s){
            if(x == '*' && !stk.empty()){
                stk.pop();
                continue;
            }
            stk.push(x);
        }
        string result = "";
        while(!stk.empty()){
            result += stk.top();
            stk.pop();
        }
        reverse(result.begin(), result.end());
        return result;
    }
};