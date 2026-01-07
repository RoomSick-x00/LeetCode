class Solution {
    public:
        bool isValid(string s) {
            stack<char> stk;
    
            int n = s.length();
    
            for (int i = 0; i< n; i++){
                if (s[i] == '{' || s[i] == '[' || s[i] == '('){
                    stk.push(s[i]);
                }
                else{
                    if (stk.empty()) return false;
    
                    char top = stk.top();
                    if ((s[i] == ')' && top == '(') ||
                        (s[i] == ']' && top == '[') ||
                        (s[i] == '}' && top == '{')) {
                        stk.pop();  
                    } else {
                        return false; 
                    }
                }
            }
            return stk.empty();
        }
    };