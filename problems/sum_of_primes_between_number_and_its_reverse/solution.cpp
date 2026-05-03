class Solution {
public:
    int sumOfPrimesInRange(int n) {
        int k = n;
        int rev = 0;
        int sum = 0;
        for(int i = 0; k != 0; i++){
            int digit = k % 10;
            rev = (rev * 10 )+ digit;
            k /= 10;
        }

        int mini = min(rev, n);
        if(mini == 1) mini += 1;
        int maxi = max(rev, n);
        for(int i = mini; i <= maxi; i++){
            
            int temp = i;
            bool isPrime = true;
            for(int j = 2; j <= i / 2; j++){
                if(i % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if(isPrime) sum += i;
        }

        return sum;
    }
};