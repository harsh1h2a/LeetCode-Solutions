class Solution {
public:
    set<vector<int>> s;
    void combinationsum(vector<int>& arr,int idx,int tar,vector<vector<int>> &ans,vector<int> &combi){
        if(idx==arr.size() || tar<0){
            return;
        }
        if(tar==0){
            if(s.find(combi)==s.end()){
                ans.push_back(combi);
                s.insert(combi);
            }
            return;
        }

        combi.push_back(arr[idx]);
        
        combinationsum(arr,idx+1,tar-arr[idx],ans,combi);
        
        combinationsum(arr,idx,tar-arr[idx],ans,combi);
        
        combi.pop_back();
        combinationsum(arr,idx+1,tar,ans,combi);
    }
    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combi;
        combinationsum(arr,0,target,ans,combi);
        return ans;
    }
};