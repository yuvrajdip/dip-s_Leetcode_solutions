class Solution {
public:

    int sumOfDivisors( vector<int>& nums, int divisor)
    {
        int sum = 0 , n = nums.size() ;
        for( int i = 0 ; i < n ; i++ )
        {
            sum +=  (nums[i]+divisor - 1 )/divisor ;
        }

        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        
        int n = nums.size(), maxi= INT_MIN ;
        for( int j=0 ; j<n ; j++ )
        {
            maxi = max( maxi , nums[j]);
        }

        int low = 1 , high = maxi ;

        while( low <= high )
        {
            int mid = low + ( high - low )/2 ;

            if( sumOfDivisors( nums , mid ) <= threshold )
            {
                high = mid - 1 ;
            }
            else
                low = mid + 1 ;
        }

        return low ;
    }
};