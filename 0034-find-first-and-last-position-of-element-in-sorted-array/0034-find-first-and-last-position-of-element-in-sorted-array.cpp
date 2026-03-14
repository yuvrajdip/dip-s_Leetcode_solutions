class Solution {
public:
    int first_Occur(vector<int>&nums, int target)
    {
        int low=0, high=nums.size()-1 , ans = -1 ;

        while( low<=high )
        {
            int mid = low + ( high-low)/2 ;

            if( nums[mid] >= target )
            {
                if ( nums[mid] == target ) ans = mid ;
                high = mid - 1 ;
            }
            else 
                low = mid + 1 ;
        }

        return ans;
    }

    int last_Occur( vector<int>&nums, int target )
    {
        int low = 0 , high = nums.size()-1 , ans = -1 ;

        while( low <= high )
        {
            int mid = low+(high-low)/2 ;

            if( nums[mid] <= target )
            {
                if( nums[mid]==target ) ans = mid ;
                low = mid+1 ;
            }
            else
                high = mid-1;

        }

        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());

        int first_Occurance = first_Occur( nums , target );
        int last_Occurance = last_Occur( nums , target );

        return { first_Occurance , last_Occurance };
    }
};