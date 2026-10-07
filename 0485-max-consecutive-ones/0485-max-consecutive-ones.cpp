class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ones = 0 , maxOnes = -1 ;
        int n= nums.size();
        for( int i=0 ; i<n ; i++ )
        {
            if( nums[i] == 0 )
            {
                maxOnes = max( maxOnes , ones );
                ones = 0 ;
            }
            else
                ones ++;
        }

        maxOnes = max( maxOnes , ones );

        return maxOnes ;
    }
};