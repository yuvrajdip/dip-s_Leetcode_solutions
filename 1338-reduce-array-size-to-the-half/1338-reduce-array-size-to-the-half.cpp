class Solution {
public:
    int minSetSize(vector<int>& arr) {
        
        unordered_map<int , int> mp;
        
        for( auto i : arr )
            mp[i]++;
        
        vector<int> v ;
        
        for( auto it : mp )
        {
            v.emplace_back( it.second );
        }
        
        sort( v.rbegin() , v.rend());
        
        int ans = 0 , sum = 0 ;
        
        for( int i=1 ; i<= v.size() ; i++ )
        {
            if( v[i-1] >= arr.size()/2 )
            {
                ans = i ; break;
            }
            else if( v[i-1] + sum >= arr.size()/2 )
            {
                ans = i ; break;
            }
            else{
                sum += v[i-1];        
            }
        }
        
        return ans ;
    }
};