class Solution {
public:
    bool checkStrings(string s1, string s2) {
        int n = s1.size();

        vector<int>even1(26, 0);
        vector<int>odd1(26, 0);
        
        vector<int>even2(26, 0);
        vector<int>odd2(26, 0);

        for(int i = 0; i < n; i++){
            char c1 = s1[i];
            int idx1 = s1[i] - 'a';

            char c2 = s2[i];
            int idx2 = s2[i] - 'a';
            if(i & 1){
                odd1[idx1]++;
                odd2[idx2]++;
            }

            else{
                even1[idx1]++;
                even2[idx2]++;
            }
        }

        for(int i = 0; i < 26; i++){
            if((odd1[i] != odd2[i]) || (even1[i] != even2[i])){
                return false;
            }
        }

        return true;
    }
};