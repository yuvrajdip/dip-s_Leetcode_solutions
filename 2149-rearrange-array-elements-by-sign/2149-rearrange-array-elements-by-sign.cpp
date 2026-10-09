class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        
        int n = nums.size();

        vector<int>v1;
        // v1 = nums;

        //*** brute force
        vector<int>pos, neg; 
        for( int i=0 ; i<n ; i++ )
        {
            if(nums[ i ] >=0 ) 
            {
                pos.push_back( nums[ i ] );
            }
            else{
                neg.push_back( nums[ i ] );
            } 
        }

        for( int i= 0 ; i<n/2 ; i++ )
        {
            v1.push_back( pos[ i ] );
            v1.push_back( neg[ i ] );
        }

        return v1;

        // int n = nums.size() , pos=0 , neg = 0 ;

        // bool firstPos = false;

        // stack<int>stck;
        // queue<int>que;

        // for( int i=0; i<n ; i++ )
        // {
            
            
        //     if( firstPos == true )
        //     {
        //         if( pos == neg )
        //         {
        //             if ( stck.top() < 0 && nums[ i ] >= 0 )
        //             {
        //                 stck.push( nums[i ] );
        //                 pos ++;
        //             }
        //             else if( stck.top() >= 0 && nums[i] < 0 )
        //             {
        //                 stck.push( nums[i] );
        //                 neg ++;
        //             }
        //         }
        //         else
        //         {
        //             que.push( nums[i] );

        //             if( stck.top() < 0 )
        //             {
        //                 // while( que.front() < 0 )
        //                 // {
        //                 //     que.push( que.front() );
        //                 //     que.pop();
        //                 // }

        //                 if( que.front() >= 0 ){
        //                     stck.push( que.front());
        //                     pos++;
        //                     que.pop();
        //                 }
        //             }
        //             else if( stck.top()>=0 )
        //             {
        //                 // while( que.front()>= 0 )
        //                 // {
        //                 //     que.push( que.front());
        //                 //     que.pop();
        //                 // }
                        
        //                 if( que.front() <0 ){
        //                     stck.push( que.front());
        //                     neg++;
        //                     que.pop();
        //                 }
        //             }
        //         }

        //         continue;
        //     }


        //     if( nums[i]>= 0 && firstPos == false )
        //     {
        //         stck.push( nums[ i ] );
        //         pos++;

        //         // while( que.front() >= 0 )
        //         // {
        //         //     int x = que.front();
        //         //     que.pop();
        //         //     que.push( x );
        //         // }

        //         // stck.push(que.front());
        //         // neg++;
        //         // que.pop();
        //     }
        //     else{
        //         que.push(nums[i]);
        //     }
        // }

        // vector<int>v ;

        // while( !stck.empty())
        // {
        //     int x = stck.top();
        //     v.push_back( x );
        //     stck.pop();
        // }

        // reverse( v.begin() , v.end());

        // return v;
    }
};