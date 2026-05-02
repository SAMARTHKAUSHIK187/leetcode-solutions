class Solution {
public:
    int rotatedDigits(int n) {
        int cnt = 0;
        for(int i = 1; i <= n; i++){
            int num = i;

            bool valid = true;
            bool nonMirror = false;
            while(num != 0){
                int digit = num % 10;
                if(digit == 3 || digit == 7 || digit == 4){
                    valid = false;
                    break;
                }

                if(digit == 2 || digit == 5 || digit == 6 | digit == 9) nonMirror = true;
                num /= 10;
            }

            if(valid && nonMirror) cnt++;
        }

        return cnt;
    }
};