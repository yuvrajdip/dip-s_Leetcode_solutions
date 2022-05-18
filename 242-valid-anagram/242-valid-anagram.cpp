class Solution {
public:
    bool isAnagram(string s, string t) {
         /*
        // Bruteforce approach
        
        int store1[26]={0}, store2[26]={0};
        
        int n1 = s.length() , n2 = t.length();
        
        for( int i=0 ; i<n1 ; i++ )
            store1[ s[i]-'a' ]++;
        
        for( int i=0 ; i<n2 ; i++ )
            store2[ t[i]-'a' ]++;
        
        for( int i= 0 ; i<26; i++)
            if( store1[i] != store2[i] )
                return false ;
        
        return true ;
        */
        
        // Hashmap approach
        
        unordered_map< char , int> mp ;
        
        for( auto i : s )
            mp[ i ]++;
        
        for( auto i : t )
            mp[ i ]--;
        
        for( auto i: mp)
            if( i.second != 0 )
                return false ;
        
        return true ;
    }
};