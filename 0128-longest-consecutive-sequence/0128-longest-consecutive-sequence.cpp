class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();

        if( n== 0 ) return 0;
        

        map<int, int>mp;

        for( int i=0; i<n ; i++)mp[ nums[i]]++;

        if( mp.size()==1 ) return 1;

        auto it = mp.begin();

        auto prevIt = it ; 
        ++it ;

        int maxLen = INT_MIN ; 
        int len = 1 ;

        for( ; it != mp.end(); ++it )
        {
            
            if(it->first == prevIt->first + 1)
            {
                len++;
            }
            else
            {
                len = 1; // Reset length sequence if broken
            }
            maxLen = max(maxLen, len);
            
            prevIt = it; // FIX: Always advance prevIt to match 'it' right
        }

        return maxLen ;
    }
};