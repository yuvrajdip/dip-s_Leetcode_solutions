class Solution {
public:
    
    // Problem link : https://leetcode.com/problems/top-k-frequent-elements/
    
    // Solution video : https://www.youtube.com/watch?v=YPTqKIgVk-k
    
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        // This problem can be solved using Hashmap with Bucket sort or Lambda Function or Priority Queue
        
        // Hashmap Priority Queue approach
        
        int n = nums.size();
        
        unordered_map<int , int> freq ;
        
        for( auto i: nums )
            freq[i]++;
        
        priority_queue<pair<int , int>> pq;
        
        for( auto i : freq )
        {
            pq.push( make_pair( i.second , i.first ));
        }
        
        vector<int> ans ;
        
        for( int i=0 ; i<k ; i++ )
        {
            ans.emplace_back( pq.top().second );
            pq.pop();
        }
        
        return ans ;
        
        /*
        
        // Hashmap with Bucket sort approach
        // I found this approach easy
        
        
        int n = nums.size() ;
        
        unordered_map<int , int> mp ; 
        
        for( int i=0;i<n ; i++ )
            ++mp[nums[i]];
        
        vector<vector<int>> buckets(n+1);
        
        // This below 2D Bucket vector takes frequencies as index
        // and values at every index
        
        for( auto i : mp )
            buckets[i.second].push_back(i.first );
        
        
        vector<int>store ;
        
        for( int i= buckets.size()-1 ; i>= 0 && store.size() < k; --i )
        {
            for( int p : buckets[i]){
                
                store.push_back(p);
                
                if( store.size()== k )
                    break;
            }
        }
        
    
        return store;
        
        */
    }
};