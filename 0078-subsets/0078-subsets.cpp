class Solution {
public:
    void getallsub(vector<int>& arr,vector<int>& ans,int i,vector<vector<int>>& allsubsets){
        if(i==arr.size()){
            allsubsets.push_back({ans});
            return;
        }
        ans.push_back(arr[i]);
        getallsub(arr,ans,i+1,allsubsets);

        ans.pop_back();

        getallsub(arr,ans,i+1,allsubsets);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allsubsets;
        vector<int> ans;

        getallsub(nums,ans,0,allsubsets);
        return allsubsets;
    }
};