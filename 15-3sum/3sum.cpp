class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> result;
        
        // Step 1: Sort the array (required for two-pointer + duplicate skipping)
        sort(nums.begin(), nums.end());
        
        // Step 2: Fix the first number, then use two pointers for the rest
        for (int i = 0; i < nums.size() - 2; ++i) {
            
            // Skip duplicate values for i (very important)
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }
            
            // Now use two pointers to find pair that sums to -nums[i]
            int left = i + 1;
            int right = nums.size() - 1;
            int target = -nums[i];
            
            while (left < right) {
                int sum = nums[left] + nums[right];
                
                if (sum == target) {
                    // Found a valid triplet
                    result.push_back({nums[i], nums[left], nums[right]});
                    
                    // Skip duplicates for left
                    while (left < right && nums[left] == nums[left + 1]) {
                        left++;
                    }
                    // Skip duplicates for right
                    while (left < right && nums[right] == nums[right - 1]) {
                        right--;
                    }
                    
                    left++;
                    right--;
                }
                else if (sum < target) {
                    left++;
                }
                else {  // sum > target
                    right--;
                }
            }
        }
        
        return result;
    }
};