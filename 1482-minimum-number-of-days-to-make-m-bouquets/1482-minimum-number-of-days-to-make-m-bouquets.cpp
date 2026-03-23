class Solution {
public:

    int func( vector<int>& daysToBloom , int daysUsed , int k , int m )
    {
        printf("Day : %d\n", daysUsed );
        int bouquetsMade =0 , flowersTaken = 0 , n = daysToBloom.size() ;

        if( n == 1 )
        {
            if( daysToBloom[0] <= daysUsed && k == 1 && m == 1 )
            {
                return m ;
            }
            else
            {
                return -1 ;
            }
        }

        for( int i=0 ; i < n ; i ++ )
        {
            if( flowersTaken < k )
            {
                // printf("Flower : %d\n", daysToBloom[i] );
                // printf("Flowers Taken : %d\nDays : %d\n", flowersTaken , daysUsed );
                if( i-1 >= 0 && daysToBloom[i] <= daysUsed && daysToBloom[i-1] <= daysUsed )
                {
                    flowersTaken ++;
                    // printf("Flowers Taken : %d\n", flowersTaken , daysUsed );

                    if( flowersTaken == k )
                    {
                        bouquetsMade ++;
                        flowersTaken = 0 ;
                    }
                }
                else if( i+1 <=n-1 && daysToBloom[i] <= daysUsed && daysToBloom[i+1] <= daysUsed )
                {
                    flowersTaken ++;
                    if( flowersTaken == k )
                    {
                        bouquetsMade ++;
                        flowersTaken = 0 ;
                    }
                }
                else if( daysToBloom[i] <= daysUsed )
                {
                    flowersTaken ++;
                    if( flowersTaken == k )
                    {
                        bouquetsMade ++;
                        flowersTaken = 0 ;
                    }
                }
                else{
                    flowersTaken = 0 ;
                }
            }
            
        }

        return bouquetsMade;
    }


    int minDays(vector<int>& bloomDay, int m, int k) {

        // if ((long long)m * k > bloomDay.size()) return -1;
        int n = bloomDay.size();

        int minimumDays = INT_MAX , maximumDays = INT_MIN ;

        for( int i=0 ; i< n ; i++ )
        {
            minimumDays = min( minimumDays , bloomDay[i]);
            maximumDays = max( maximumDays , bloomDay[i]);
        }

        int low = minimumDays , high = maximumDays ;

        // printf("Low : %d , High : %d\n", low , high );

        int ans = -1 ;

        while( low <= high )
        {
            int mid = low + ( high - low )/ 2 ;
            
            if( func(bloomDay , mid , k , m ) < m )
            {
                low = mid+1 ;
            }
            else{
                high = mid - 1 ;
            }
        }

        if( func(bloomDay , low , k , m ) >= m )
        {
            return low ;
        }
        else
        {
            return -1 ;
        }
    }
};