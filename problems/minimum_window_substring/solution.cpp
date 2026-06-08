class Solution {
public:
    string minWindow(string s, string t) {
        int l = 0, r = 0;
        int n = s.size();
        vector<int> cnt(256, 0);
        for(char c : t) cnt[c]++;
        if(t.size() > n || t.size() == 0) return "";
        int k = t.size();
        int minLen = INT_MAX;
        int stInd = 0;
        while(r < n){
            if(cnt[s[r]] > 0){
                k--;
            }
            cnt[s[r]]--;
            r++;
            while(k == 0){
                if((r - l) < minLen ){
                    minLen = r-l;
                    stInd = l;
                }
                cnt[s[l]]++;
                if(cnt[s[l]] > 0){
                    k++;
                }
                l++;
            }
        }
        if(minLen != INT_MAX)  return s.substr(stInd, minLen);
        else return "";
    }
};