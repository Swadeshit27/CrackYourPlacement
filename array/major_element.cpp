class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int i = 0, cnt = 0;
        for (int j = 0; j < nums.size(); j++)
        {
            if (nums[i] == nums[j])
            {
                cnt++;
            }
            else
            {
                if (cnt == 0)
                {
                    cnt++;
                    i = j;
                }
                else
                    cnt--;
            }
        }
        return nums[i];
    }
};