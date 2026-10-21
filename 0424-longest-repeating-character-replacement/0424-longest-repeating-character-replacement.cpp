
class Solution {
public:
    int characterReplacement(string s, int k) {

        int mp[26] = {0};

        int l = 0, r = 0, n = s.size();
        int maxReplace = 0;
        int maxFreq = 0;

        while (r < n)
        {
            mp[s[r] - 'A']++;

            maxFreq = max(maxFreq, mp[s[r] - 'A']);

            while ((r - l + 1) - maxFreq > k)
            {
                mp[s[l] - 'A']--;
                l++;
            }

            maxReplace = max(maxReplace, r - l + 1);

            r++;
        }

        return maxReplace;
    }
};
