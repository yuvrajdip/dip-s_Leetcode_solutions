// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int item)
    {
        //Your Code Here
        sort( arr , arr+n );
        
        // This problem will have to apply two pointer algo must 
        // for optimal solution
        
        
        
        // Below is Hashset solution( O(n)^2 )
        
        // Getting WA in this approach
        
        /*
        for( int i=0 ; i<n ; i++ )
        {
            unordered_set<int> st;
            
            for( int j=i+1 ; j<n ; j++ )
            {
                st.insert( arr[j] );
                
                if( st.find( item- (arr[i]+arr[j]) ) != st.end() )
                    return true;
            }
            
            st.clear();
        }
        */
        
        // Binary Search approach
        
        for( int i= 0 ; i<n-2 ; i++ ){
           
            int left = i+1 , right = n-1;
           
            while(left<right ){
                if( arr[left]+arr[right ]== item -arr[i] )
                    return true ;
                else if( arr[left]+arr[right] <item-arr[i] )
                    left++;
                else if( arr[left]+arr[right] >item-arr[i] )
                    right--;
            }
        }
        
        return false ;
    }

};

// { Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}
  // } Driver Code Ends