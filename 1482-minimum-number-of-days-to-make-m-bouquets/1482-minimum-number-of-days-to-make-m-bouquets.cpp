class Solution {
public:

    int func(vector<int>& bloomDay, int daysUsed, int k, int m) {
    int bouquets = 0;
    int flowers = 0;

    for (int i = 0; i < bloomDay.size(); i++) {
        if (bloomDay[i] <= daysUsed) {
            flowers++;
            if (flowers == k) {
                bouquets++;
                flowers = 0;
            }
        } else {
            flowers = 0; // reset if not bloomed
        }
    }

    return bouquets;
}


    int minDays(vector<int>& bloomDay, int m, int k) {

        if ((long long)m * k > bloomDay.size()) return -1;
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