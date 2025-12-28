class Solution {
public:
    bool isPalindrome(int x) {
        int temp = x;
        long long revNum = 0;

        while(temp > 0)
        {
            int digit = temp%10;
            revNum = revNum*10 + digit;
            temp = temp/10;
        }

        return x == revNum;
    }
};