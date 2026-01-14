class Solution {
public:
    string removeDuplicates(string s) {
        int i = 0;
        int n = s.length();

        while(i < n -1){
            if(s[i] == s[i + 1]){
                s.erase(i , 2);
                if(i > 0){
                    i--;
                }
            }

            else if(i < n -1){
                i++;
            }

            n = s.length();
        }

        return s;
        
    }
};