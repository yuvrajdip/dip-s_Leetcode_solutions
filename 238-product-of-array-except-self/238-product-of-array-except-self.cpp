class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> premult , sufmult ;
        
        int pre= 1 , suf=1 ; 
        
        int n= nums.size();
        for( int i= 0 ; i<n ; i++){
            pre *= nums[i];
            
            premult.emplace_back( pre );
        }
        
        /*
        for( auto i : premult )
            cout<<i << " ";
        cout << endl;
        */
        
        for(int i=n-1 ; i>=0 ; i-- ){
            suf *= nums[i];
            
            sufmult.emplace_back( suf );
        }
        
        reverse( sufmult.begin() , sufmult.end());
        
        /*
        for( auto i : sufmult)
            cout<<i << " ";
        cout<< endl;
        */
        
        vector<int>store;
        for( int i= 0 ; i<n ; i++ )
        {
            int res = 0 ;
            
            if( nums[i] !=0 )
                res = premult[i]/nums[i] * sufmult[i]/nums[i];
            else if( nums[i]==0 ){
                if( i>=1 and i<= n-2 )
                    res = premult[i-1] * sufmult[i+1];
                else if( i==0 )
                    res = sufmult[i+1];
                else if( i==n-1 )
                    res = premult[i-1];
            }
            
            store.emplace_back( res );
        }
        
        return store ;
    }
};