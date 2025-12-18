class Solution {
public:
    bool isPowerOfTwo(int n) {

        bool power;
        while( n != 0){
            if( n %2 == 0){
                n = n /2;
            }

            else if( n %2 != 0 && n == 1){
                power = true;
                break;
            }

            else if( n%2 != 0){
                power = false;
                break;
            }

        if( n == 0){
            power = false;
        }
        }

        return power;
        
    }
};