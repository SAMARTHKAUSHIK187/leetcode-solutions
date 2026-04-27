class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.size();
        
        string s1 = "";
        int cnt = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '('){
                cnt++;
                if(cnt != 1){
                    s1 += s[i];
                }
                
            }

            else{
                cnt--;
                if(cnt != 0){
                    s1 += s[i];
                }
            }

            
        }
        return s1;
    }
};