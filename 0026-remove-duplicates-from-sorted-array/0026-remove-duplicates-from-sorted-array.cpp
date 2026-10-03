class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        bool duplicate = false ;
        int unique = 1 , j = 0 ;


        for( int i=1 ; i< n ; i++ )
        {

            if( nums[ i ] > nums[ i-1 ] )
            {
                if( duplicate == true )
                {
                    nums[ j ] = nums[ i ];
                    j = j + 1 ;
                    // duplicate = false;
                }
                // duplicate = false;

                unique = unique + 1 ;
            }

            else {
                if( duplicate == false )
                {
                    j = i ;
                    duplicate = true ;
                }
            }
        }

        return unique ;
    }
};