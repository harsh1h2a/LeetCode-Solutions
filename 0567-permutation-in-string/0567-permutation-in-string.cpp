class Solution {
public:
bool isfrqsame(int frq1[],int frq2[]){
    for(int i=0;i<26;i++){
        if(frq1[i]!=frq2[i]){
            return false;
        }
    }
    return true;
}
    bool checkInclusion(string s1, string s2) {
        int frq[26]={0};
        for(int i=0;i<s1.length();i++){
            frq[s1[i]-'a']++;
        }
        int windsize=s1.length();
        for(int i=0;i<s2.length();i++){
            int windidx=0,idx=i;
            int windfrq[26]={0};
            while(windidx<windsize && idx<s2.length()){
                windfrq[s2[idx]-'a']++;
                windidx++;idx++;
            }
            if(isfrqsame(frq,windfrq)){
                return true;
            }
        }
        return false;
    }
};