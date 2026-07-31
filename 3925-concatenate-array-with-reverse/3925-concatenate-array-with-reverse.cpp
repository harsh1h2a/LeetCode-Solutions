class Solution {
public:
    vector<int> concatWithReverse(vector<int>& nums) {
        vector<int> ans;
        
        for(int j=0;j<nums.size();j++){
            ans.push_back(nums[j]);
        }
        for(int j=nums.size()-1;j>=0;j--){
            ans.push_back(nums[j]);
        }
        return ans;
    }
};