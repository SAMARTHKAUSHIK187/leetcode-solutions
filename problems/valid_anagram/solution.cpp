class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()){
            return false;
        }

        int count1[26] = {0};
        int count2[26] = {0};

        for(int i = 0; i < s.length(); i++){
            char c1 = s[i];
            int i1 = c1 - 'a';
            count1[i1]++;

            char c2 = t[i];
            int i2 = c2 - 'a';
            count2[i2]++;
        }

        for(int i = 0; i < 26; i++){
            if(count1[i] != count2[i]){
                return false;
            }
        }

        return true;
    }
};