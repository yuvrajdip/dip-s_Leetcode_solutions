class Solution {
public:
    int reverse(int x) {
        
        int ans = 0 ;
        
        while(x != 0){ // n !=0  is a mandatory. you can give n>0 but it will give WA for negative integers
            
            int digit = x%10;
            
            if( (ans> INT_MAX/10 ) || ( ans< INT_MIN/10 ) )
            {
                return 0;
            }
        
            ans = (ans*10) + digit ;
            
            x = x/10 ;
        }
        
        return ans ;
    }
};