class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int> finalArray ; 
        vector<int> tempArr;
         
        for(int i = 0 ; i< nums.size() ;i= i+2){
            int j = nums[i];
            while(j > 0){
                finalArray.push_back(nums[i+1]);
                j--;
            }
        }

        return finalArray;
    }
};