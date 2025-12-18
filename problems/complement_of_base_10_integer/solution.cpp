class Solution {
public:
    int bitwiseComplement(int n) {
        int m = n;
        int mask = 0;
        while(m != 0){
            mask = ((mask << 1) | 1);
            m = m >> 1;
        }

        n = (~n) & mask;
        if( n == 0 && mask == 0 ){
            n = 1;
        }

        return n;
        
    }
};