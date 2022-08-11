class Solution {
public:
    int reverse(int n) {
        
        int ans = 0 ;
        
        while(n != 0){ // Here n !=0  is a mandatory condition , you can't give n>0
            int digit = n%10;
            
            if( (ans> INT_MAX/10 ) || ( ans< INT_MIN/10 ) )
            {
                return 0;
            }
        
            ans = ans*10 + digit ;
            
            n = n/10 ;
        }
        
        return ans ;
    }
};