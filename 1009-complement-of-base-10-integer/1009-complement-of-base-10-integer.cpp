class Solution {
public:
    int bitwiseComplement(int n) {
        
        int m = n, mask = 0;
        
        if( n==0 ){
            return 1;
        }
        
        while (m != 0)
        {
            mask = mask << 1;
            mask = mask | 1;

            m = m >> 1;
        }

        n = ~n;

        int ans = n & mask;

        return ans ;
    }
};