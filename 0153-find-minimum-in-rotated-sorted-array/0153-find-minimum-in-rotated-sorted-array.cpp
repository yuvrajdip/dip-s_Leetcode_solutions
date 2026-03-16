class Solution {
public:

    int findMin(vector<int>& nums) {
        // doing this problem in log(n) time complexity

        int low = 0 , high = nums.size()-1, ans = INT_MAX ;

        while( low <=high )
        {
            int mid = low + (high-low)/2; 

            // check which half is sorted
            
            // checking if right half is sorted
            if( nums[mid] <= nums[high])
            {
                ans = min( ans , nums[mid]);
                high = mid-1 ;
            }
            // checking if left half is sorted 
            else
            {
                ans = min( ans , nums[low]);
                low = mid+1 ;
            }
        }

        return ans;
    }
};