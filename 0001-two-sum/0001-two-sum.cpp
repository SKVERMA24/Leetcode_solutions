class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> um;
      
        for (int i = 0; i <  nums.size(); i++) {
            int frst = nums[i];
            int sec = target - frst;
            if (um.find(sec) != um.end()) {
                return {i, um[sec]};

            } else {
                um[frst] = i;
            }
        }
        return {};
    }
};