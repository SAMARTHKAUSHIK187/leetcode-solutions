class Solution {
public:
    bool isValid(vector<int>& freq){
        return ((freq[0] > 0) && (freq[1] > 0) && (freq[2] > 0));
    }
    int numberOfSubstrings(string s) {
        int l = 0, r = 0;
        int n = s.size();
        int cnt = 0;
        vector<int> freq(3, 0);
        while( r < n){
            freq[s[r] - 'a']++;
            while(isValid(freq)){
                cnt += n - r;
                freq[s[l] - 'a']--;
                l++;
            }
            r++;
        }
        return cnt;
    }
};