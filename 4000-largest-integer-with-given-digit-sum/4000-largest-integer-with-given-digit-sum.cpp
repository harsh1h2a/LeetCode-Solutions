class Solution {
public:
    int largestInteger(int n, int s) {
        int ans=0;
        if(s>n*9){
            return -1;
        }
        
        for(int i=0;i<n;i++){
            int digit=min(9,s);
            ans=ans*10+digit;
            s-=digit;
            
        }
        return ans;
    }
};