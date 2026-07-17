class Solution {
public:
int reverse(int n) {
        int re=0;
        while(n!=0){
            int dig=n%10;
            if(re>INT_MAX/10 || re<INT_MIN/10){
                return 0;
            }
            re= re*10+dig;
            n=n/10;
        }
        return re;
}    
    bool isPalindrome(int x) {
        if(x<0)return false;
        int re=reverse(x);
        return x==re;
        
    }
};