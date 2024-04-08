

// wrong solution for dupilcates

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        map<int, int> mp;
        int n = nums.size();
        
        // Count frequency of each number
        for (int num : nums) {
            mp[num]++;
        }
        
        for (int i = 0; i < n; ++i) {
            for (int j = i + 1; j < n; ++j) {
                int k = -(nums[i] + nums[j]);
                
                if (mp[k] > 0 && (k != nums[i] || mp[nums[i]] > 1) && (k != nums[j] || mp[nums[j]] > 1)) {
                    ans.push_back({nums[i], nums[j], k});
                    mp[nums[j]]--; mp[k]--;
                }
            }
            mp[nums[i]]--;
        }
        
        return ans;
    }
};
