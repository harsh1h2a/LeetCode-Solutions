class Solution {
public:
    int climbStairs(int n) {
        int a=1,b=2,c=0;
        for(int i=0;i<n-2;i++){
            c=a+b;
            a=b;
            b=c;
        }
        if(n==2)return 2;
        
        if(n==1)return 1;
        return c;
    }
};