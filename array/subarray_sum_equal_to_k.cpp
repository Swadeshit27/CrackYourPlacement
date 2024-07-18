class Solution
{
public:
    int subarraySum(vector<int> &nums, int k)
    {
        int n = nums.size(), sum = 0, cnt = 0;
        unordered_map<int, int> mp;
        mp[0] = 1;
        for (auto it : nums)
        {
            sum += it;
            int rem = (sum - k);
            if (mp.find(rem) != mp.end())
            {
                cnt += mp[rem];
            }
            mp[sum]++;
        }
        return cnt;
    }
};