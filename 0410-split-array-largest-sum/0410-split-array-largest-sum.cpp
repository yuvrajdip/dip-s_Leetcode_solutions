class Solution {
public:
    int canSplit( vector<int>& nums , int largest , int k )
    {
        int total = 0 , split = 0 , n = nums.size() ;

        for( int i=0 ; i< n ; i++ )
        {
            total += nums[i];

            if( total > largest )
            {
                split += 1 ;
                total = nums[i];
            }
        }

        if( split +1 <= k )
        {
            return true ;
        }
        else
        {
            return false ;
        }
    }

    int splitArray(vector<int>& nums, int k) {
        int n = nums.size() ;

        int maxi = INT_MIN , sum = 0 ;

        for( int i=0 ; i<n ; i++ )
        {
            maxi = max( maxi , nums[i]);
            sum += nums[i];
        }

        int low = maxi , high = sum ;

        while( low <= high )
        {
            int mid = low + ( high - low )/2 ;

            if( canSplit( nums , mid , k )== true )
            {
                high = mid - 1 ;
            }
            else
            {
                low = mid + 1 ;
            }
        }

        return low;
    }
};