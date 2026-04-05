class Solution {
public:

    long long func( vector<int>&piles , int k )
    {
        // k is minimum bananas he want to eat from that pile he chooses per hour to eat

        int n = piles.size();

        long long hoursRequires = 0 ;

        for( int i = 0 ; i <n ; i++ )
        {
            hoursRequires += (long long)(piles[i]+k-1)/k;
        }

        return hoursRequires;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        // the guard will come back after h hours
        // koko sees n piles infront of him

        // he wants to fiqure out the minimum number of bananas she should eat per hour to finish eating all the bananas before the guards return.

        
        int maxi = INT_MIN ;
        int n = piles.size();

        for( int i=0 ; i<n ; i++ )
        {
            maxi = max( maxi , piles[i] );
        }

        int low = 1, high = maxi ;


        while( low <= high )
        {
            int mid = low + ( high-low)/2 ;

            if( func( piles , mid ) <= (long long)h )
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