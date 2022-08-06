class Solution {
public:
    int hammingWeight(uint32_t n) {
        
        int count=0;
        while(n>0){
            
            // checking if the last digit is 1
            if( n&1 )
            {
                count++;
            }
            
            n = n>>1 ; // right shifting the binary bits 
        }
        
        return count;
    }
};