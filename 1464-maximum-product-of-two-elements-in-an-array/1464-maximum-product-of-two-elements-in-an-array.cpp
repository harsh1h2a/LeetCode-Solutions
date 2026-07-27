class Solution {
public:
    int maxProduct(vector<int>& num) {
        int a=0,b=0,c=0;

        for(int i=0;i<num.size();i++){
            if(num[i]>a){
                a=num[i];
                c=i;
            }
        }
        for(int j=0;j<num.size();j++){
            if(num[j]>b){
                if(j!=c){
                    b=num[j];
                }
            }

        }
        return (a-1)*(b-1);
    }
};