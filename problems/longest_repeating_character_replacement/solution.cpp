class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0;
        int maxLen = 0;
        int maxFreq = 0;
        vector<int> cnt(26, 0);
        while(r < s.size()){
            cnt[s[r] - 'A']++;
            maxFreq = max(maxFreq, cnt[s[r] - 'A']);
            if(r-l+1 - maxFreq > k){
                cnt[s[l]-'A']--;
                l++;
            }else{
                maxLen = max(r-l+1, maxLen);
            }
            r++;
        }
        return maxLen;
    }
};