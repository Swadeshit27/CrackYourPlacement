class Solution
{
public:
    vector<int> findDuplicates(vector<int> &nums)
    {
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++)
        {
            int num = nums[abs(nums[i]) - 1];
            if (num < 0)
            {
                ans.push_back(abs(nums[i]));
            }
            else
            {
                nums[abs(nums[i]) - 1] = -num;
            }
        }
        return ans;
    }
};