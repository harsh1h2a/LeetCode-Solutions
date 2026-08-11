class Solution {
public:
    bool checkRecord(string s) {
        int l1=2;
        int a=0;

        for(int i=0;i<s.size();i++){
            if(s[i]=='A'){
                a++;
            }
            if(s[i]=='L' && i+2<s.size()){
                if(s[i+2]=='L' && s[i+1]=='L'){
                    return false;
                }
            }

        }
        if(a>=2){
            return false;
        }
        return true;
    }
};