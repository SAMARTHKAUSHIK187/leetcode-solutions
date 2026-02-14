class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {

        string ans = "";
        
        for(int i = 0; i < words.size(); i++){
            string s = words[i];
            
            int sum = 0;
            
            for(int j = 0;j < s.size(); j++){
                int n = s[j] - 'a';
                sum += weights[n];
            }
            
            int n = sum % 26;
            ans += 'z' - n;
            
            
            
            
        }

        return ans;
    }
};