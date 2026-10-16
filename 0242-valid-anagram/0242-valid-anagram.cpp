class Solution {
public:
    bool isAnagram(string s, string t) {
        int count1[26]={0}, count2[26]={0};

        for( int i=0 ; i<s.size(); i++) count1[ s[i]-'a']++;

        for( int j=0 ; j<t.size(); j++) count2[ t[j]-'a']++;

        for( int i=0 ; i<26; i++)
        {
            if( count1[i] != count2[i] )
            {
                return false;
            }
        }

        return true;
    }
};