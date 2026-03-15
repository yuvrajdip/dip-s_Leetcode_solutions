class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        int low = 0 , high = nums.size()-1 ;
        int ans = -1;

        while( low<= high )
        {
            int mid = low + (high-low)/2 ;

            if( nums[mid] == target ) return mid ;
            
            // check if left half is sorted
            else if( nums[low]<=nums[mid] )
            {
                // then check if target is lying in that range

                if( nums[low]<= target && target <= nums[mid] )
                {
                    high = mid-1 ;
                }
                else low = mid + 1 ;
            }

            // check if right half is sorted
            else if( nums[mid]<= nums[high] )
            {

                // then check ift target is lying in that range
                if( target >= nums[mid] && target <= nums[high] )
                {
                    low = mid + 1 ;
                }
                else
                    high = mid - 1 ;
            }
        }

        return -1 ;
    }
};