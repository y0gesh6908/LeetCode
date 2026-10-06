class Solution {
public:
    int minAddToMakeValid(string s) {
        int ans=0;
        int open=0;

        for(auto x:s){
            if(x=='('){
                open++;
            }
            else{
                if(open>0){
                    open--;
                }
                else{
                    ans++;
                }
            }
        }
        return open+ans;
    }
};