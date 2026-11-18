class Solution {
public:
    int minChanges(string s) {
        // int cntone=0;
        // int cntzero=0;

        // for(auto x:s){
        //     if(x=='0'){
        //         cntzero++;
        //     }
        //     else{
        //         cntone++;
        //     }
        // }

        
        int ans=0;

        for(int i=0;i<s.size();i+=2){
            int onecnt=0;
            int zerocnt=0;
            if(s[i]=='0'){
                zerocnt++;
            }
            else{
                onecnt++;
            }
            if(s[i+1]=='0'){
                zerocnt++;
            }
            else{
                onecnt++;
            }

            ans+= min(zerocnt,onecnt);
        }
        return ans;
    }
};