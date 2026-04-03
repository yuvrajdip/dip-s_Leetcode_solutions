class Solution {
public:

    int func( vector<int>& weights , int capacity )
    {
        int loadPerDay = 0 , daysNeeded = 1 , n = weights.size() ;
        for( int j=0 ; j< n ; j++ )
        {
            loadPerDay+= weights[j];
            if( loadPerDay > capacity )
            {
                loadPerDay = weights[j];
                daysNeeded += 1 ;
            }
        }

        return daysNeeded ;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        
        int maxi = INT_MIN , n = weights.size() , sumOfAllWeights = 0 ;

        for( int i=0; i<n ; i++ )
        {
            maxi = max( weights[i], maxi );
            sumOfAllWeights += weights[i];
        }

        int low = maxi , high = sumOfAllWeights ;

        while( low <= high )
        {
            int mid = low + ( high-low )/2 ;

            if( func(weights, mid ) <= days )
            {
                high = mid-1 ;
            }
            else
            {
                low = mid + 1 ;
            }
        }

        return low ;

    }
};