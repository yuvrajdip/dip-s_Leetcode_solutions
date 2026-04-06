class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int n = arr.size();
        
        unordered_set<int>existingNumbers ;

        vector<int> missingNumbers;

        for( int i=0 ; i< n ; i++ )
            existingNumbers.insert( arr[i] );

        int current = 1 ;

        while( missingNumbers.size() < k )
        {
            if( existingNumbers.find( current ) == existingNumbers.end() )
            {
                missingNumbers.push_back( current );
            }

            current ++;
        }

        return missingNumbers[k-1];
    }

};