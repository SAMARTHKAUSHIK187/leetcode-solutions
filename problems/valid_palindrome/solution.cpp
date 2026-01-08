class Solution {
public:
    
    void toLower(string &s) {
        for(int i = 0; i < s.length(); i++){
            if(s[i] >= 'A' && s[i] <= 'Z'){
                s[i] = (s[i] - 'A' + 'a');
            }
        }
    }

        
    bool isPalindrome(string s) {
        
        toLower(s);
        bool Palin = true;
        int i = 0;
        int j = s.length() - 1;

        while( i <= j){
            if( (s[i] >= 'a' && s[i] <= 'z') || s[i] >= '0' && s[i] <= '9'){

                if((s[j] >= 'a' && s[j] <= 'z') || s[j] >= '0' && s[j] <= '9'){
                    if(s[i] != s[j]){
                        return false;
                        break;
                    } else{
                        Palin = true ;
                        i++;
                        j--;
                        // break;
                    }
                }else{
                    j--;
                }

            }else{
                i++;
            }
    
        }  

        return Palin;
    }    
};