class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int k = s1.size();

        int left = 0 , right = 0 , n = s2.size();
        map<char , int > mp1, mp2 ;

        for( auto i: s1) mp1[i]++;
        // for( auto i:s2) mp2[i]++;

        while(right< n )
        {
            mp2[s2[right]]++;

            if( right-left+1 == k )
            {
                
                if( mp1 == mp2 ) return true ;

                mp2[s2[left]]-- ;

                if( mp2[s2[left]] == 0 )
                {
                    mp2.erase(s2[left]);
                }
                left ++;
            }

            right++;
        }

        return false;
    }
};