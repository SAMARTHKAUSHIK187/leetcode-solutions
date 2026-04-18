class Solution {
public:
    int mirrorDistance(int n) {
        int rev = 0;
        int num = n;
        for(int i = 0 ; num != 0; i++){
            int digit = num % 10;

            rev = (rev*10) + digit;
            num /= 10;
        }

        int ans = abs(rev - n);
        return ans;
        
    }
};