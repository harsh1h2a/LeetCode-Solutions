class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int mi=nums[i];
            int mx=nums[0];
            for(int j=0;j<=i;j++){
                mx=max(nums[j],mx);
            }
            for(int j=i;j<n;j++){
                mi=min(nums[j],mi);
            }
            if(mx-mi<=k){
                return i;
            }
        }
        return -1;
    }
};