class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int maxi=0;
        for(auto x:s){
            if(x=='('){
                cnt++;
            }
            else if(x==')'){
                maxi=max(cnt,maxi);
                cnt--;
            }
            
        }
        return maxi;
    }
};