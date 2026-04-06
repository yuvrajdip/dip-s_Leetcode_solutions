class Solution {
public:
    int mySqrt(int x) {
        int low = 1 , high = x;

      while( low<= high )
      {
        int mid = low + (high-low)/2 ;

        if( (long long)mid*mid == x )
        {
            return mid;
        }
        else if ( (long long)mid*mid > x )
        {
            high = mid-1 ;
        }
        else 
        {
            low = mid+1 ;
        }
      }

      return low-1;
    }
};