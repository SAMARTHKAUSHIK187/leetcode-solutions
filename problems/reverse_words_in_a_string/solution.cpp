class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word = "";
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ' '){
                word += s[i];
            }
            else if(!(word.empty())){
                words.push_back(word);
                word = "";
            }
        }
        if(!(word.empty())){
            words.push_back(word);
        }

        int n = words.size();
        string result = "";
        for(int i = 0; i < n; i++){
            if (i > 0) result += " ";
            result += words[n- 1 - i];
            
        }

        return result;
        
    }
};