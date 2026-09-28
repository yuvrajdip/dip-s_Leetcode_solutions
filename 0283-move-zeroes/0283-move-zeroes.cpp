class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        //* striver's solution


        int j = -1 ; //** j is first zero's index

        for( int i=0 ; i<nums.size() ; i++)
        {
            if( nums[i] == 0 )
            {
                j = i ;
                break;
            }
        }

        if( j==-1 ) return;

        for( int i= j+1 ; i<nums.size(); i++ )
        {
            if( nums[i] != 0 )
            {
                swap( nums[i], nums[j] );
                j += 1; 
            }
        }
    }
};