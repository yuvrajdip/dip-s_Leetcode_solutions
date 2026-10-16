class Solution {
public:
    string frequencySort(string s) {
        map<char, int> mp;
        int n= s.size();

        for( int i=0; i<n ; i++)mp[s[i]]++;

        vector<pair<char,int>>vec( mp.begin(), mp.end());

        sort( vec.begin(), vec.end(), [](const auto& a, const auto& b){
            return a.second>b.second;
        });
        
        string ans ="";

        for( auto it: vec)
        {
            while(it.second >0 ){
                ans += it.first;
                it.second--;
            }

        }

        return ans;
    }
};