class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int prev = 0;
        int next = nums.size()-1;
        vector<int> finalVec ;
        while(prev <= next  ){
            if(nums[prev] != val){
                finalVec.push_back(nums[prev]);
            }
            prev++;
        }
        nums = finalVec ;
        return finalVec.size();
    }
};