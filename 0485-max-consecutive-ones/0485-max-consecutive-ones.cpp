class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int curno=0;
        int maxno=0;
        for(int i=0;i<nums.size();i++){
            
            if(nums[i]==1){
                curno++;
            }else{
                curno=0;
            }
            if(curno>maxno){
                maxno=curno;
            }
        }
        return maxno;
    }
};