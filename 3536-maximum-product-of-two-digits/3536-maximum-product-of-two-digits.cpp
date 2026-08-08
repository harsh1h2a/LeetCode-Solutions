class Solution {
public:
    int maxProduct(int n) {
        vector<int> a;
        int b;
        while(n!=0){
            b=n%10;
            a.push_back(b);
            n/=10;
        }
        sort(a.begin(),a.end());
        int c,d,ans;
        c=a.size()-1;
        d=a.size()-2;
        ans=a[c]*a[d];
        return ans;
    }
};