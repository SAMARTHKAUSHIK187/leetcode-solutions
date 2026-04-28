class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int lastPosS[256] = {0};
        int lastPosT[256] = {0};

        for (int i = 0; i < s.size(); i++) {
            
            if (lastPosS[s[i]] != lastPosT[t[i]]) {
                return false;
            }

            
            lastPosS[s[i]] = i + 1;
            lastPosT[t[i]] = i + 1;
        }

        return true;
    }
};