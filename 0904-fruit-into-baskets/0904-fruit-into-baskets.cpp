class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        map<int , int >mp;

        int n = fruits.size();
        int l=0, r=0 ;
        int maxLen = 0 ;

        while( r < n )
        {
            mp[fruits[r]]++;

            while( mp.size() > 2 && l <= r )
            {
                mp[fruits[l]]--;

                if( mp[fruits[l]] == 0 )
                {
                    mp.erase( fruits[l] );
                }

                l++;
            }

            if( mp.size()==2 || mp.size()== 1 )
            {
                maxLen = max( maxLen , r-l+1);
            }

            r++;
        }

        return maxLen ;
    }
};