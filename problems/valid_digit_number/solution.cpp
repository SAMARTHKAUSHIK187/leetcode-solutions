class Solution {
public:
    bool validDigit(int n, int x) {
        int k = n;
        bool isThere = false;
        bool start = false;
        
        for(int i = 0; i < 5; i++){
            int digit = k % 10;
            if(k == 0){
                break;
            }
            if(digit == x){
                isThere = true;
            }

            if(k / 10 == 0 && digit == x){
                start = true;
            }
            k /= 10;
        }

        if(isThere && !(start)){
            return true;
        }
        else {
            return false;
        }

    }    
};