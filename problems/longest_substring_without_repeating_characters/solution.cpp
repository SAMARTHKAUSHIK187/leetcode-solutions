class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int l = 0;
        int r = 0;
        int maxLen = 0;
        vector<int> cnt(256, -1);
        int n = s.size();
        while(r < n){
            if(cnt[s[r]] != -1){
                if(cnt[s[r]] >= l){
                    l = cnt[s[r]] + 1;
                }
            }
            maxLen = max(maxLen, r - l + 1);
            cnt[s[r]] = r;
            r++;
        }
        return maxLen;
    }
};