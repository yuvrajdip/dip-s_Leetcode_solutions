**Video Solution link** : https://www.youtube.com/watch?v=r1cwGocurtA&t=8s
**This is a really good problem.**
​
class Solution {
public:
int subarraySum(vector<int>& nums, int k) {
// This problem might be solved with Sliding-Window But for now we are trying
*Hashmap and Prefix-Sum approach*
unordered_map <int , int > mp ;
mp[0]++;  *Suppose we find presum == k for the first time. So if we see presum-k == 0 is already on the map we will update our count*
int presum = 0 , count = 0 ;
for( auto i : nums )
{
presum += i ;
if( mp.find( presum-k ) != mp.end() )
{
count += mp[ presum-k ];  *This line is the most tricky part of this entire problem. Dry Run for test case : 2 3 3 -1 0 7 -2 5*