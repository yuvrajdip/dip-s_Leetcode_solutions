class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        
        int n = nums.size();
        int low = 0 , high = nums.size()-1 ;


        while(low<=high )
        {
            int mid = low + (high-low)/2 ;

            // if mid matches with mid-1
            if( mid-1 >=0 and nums[mid-1] == nums[mid] )
            {
                
                if((mid-0+1)%2==0)
                {
                    low = mid+1;
                }
                
                else
                {
                    high = mid-2;
                }
            }

            // if mid matches with mid+1 
            else if( mid+1 <= n-1 and nums[mid+1] == nums[mid] )
            {
                
                if( (mid+1-0+1)%2 == 0 )
                {
                    low = mid+1 ;
                }
                
                else
                {
                    high = mid-2;
                }
            }
            else
            {
                return nums[mid];
            }
        }

        return nums[low];
    }
};