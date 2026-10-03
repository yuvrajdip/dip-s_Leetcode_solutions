class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int n = nums.size();
        bool duplicate = false ;
        int unique = 1 , j = 0 ;


        for( int i=1 ; i< n ; i++ )
        {

            if( nums[ i ] > nums[ i-1 ] ) // means if [ 0 0 1 ]
            {
                if( duplicate == true )   // previously there was an identified duplicate value next greater value would be in J 
                {
                    nums[ j ] = nums[ i ]; // [ 0 1 1 ] // now just keep that present value into that previously identified one

                    j = j + 1 ; // j = 1 + 1 = 2 
                    
                }

                unique = unique + 1 ; 
            }

            else { // means nums[ i ] == nums[ i-1 ] means [ 0 , 0 ]
                if( duplicate == false ) // means still now flagged
                {
                    j = i ; // next greater value will be at i which is now j
                    duplicate = true ; // means flagged now or identified 
                }
            }
        }

        return unique ;
    }
};