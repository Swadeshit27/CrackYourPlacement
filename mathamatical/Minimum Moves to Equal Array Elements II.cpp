class Solution {
public:
    int minMoves2(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int mid=nums[nums.size()/2];   
        int cnt=0;
        for(auto it:nums){
            cnt+=abs(mid-it);
        }
        return cnt;
    }
};