class Solution {
public:
    string largestOddNumber(string num) {
        int n = num.size();
        string ans = "";
        int idx = 0;
        for(int i = n - 1; i >= 0; i--){
            if(num[i] % 2 != 0){
                idx = i;
                break;
            }
        }
        if(idx == 0){
            if(num[idx] & 1) return ans += num[idx];
            else return ans;
        }
        
        for(int i = 0; i <=idx; i++){
            ans += num[i];
        }

        return ans;
    }
};