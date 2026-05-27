class Solution {
public:
    int numberOfSpecialChars(string word) {
        vector<int>lower(26, 0);
        vector<int>upper(26, 0);
        vector<bool>poss(26, true);
        for(int i = 0; i < word.size(); i++){
            if(word[i] >= 'a' && word[i] <= 'z'){
                int ind = word[i] - 'a';
                lower[ind]++;
                if(upper[ind] > 0) poss[ind] = false;
            }
            else if(word[i] >= 'A' && word[i] <= 'Z'){
                int ind = word[i] - 'A';
                upper[ind]++;
                if(lower[ind] == 0) poss[ind] = false;
            }
        }
        int cnt = 0;
        for(int i = 0; i < 26; i++){
            if(lower[i] > 0 && upper[i] > 0 && poss[i]){
                cnt++;
            }
        }

        return cnt;
    }
};