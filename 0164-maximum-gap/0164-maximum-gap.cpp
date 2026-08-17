class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int b=0;
        for(int i=0;i<nums.size()-1;i++){
            int a=nums[i+1]-nums[i];
            if(b<a){
                b=a;
            }
        }
        return b;
    }
};