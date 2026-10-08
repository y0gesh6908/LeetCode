class Solution {
public:
    string removeOuterParentheses(string s) {
        int left=0;
        int right=0;
        string ans="";
        for(auto x:s){

            if(x=='('){
                left++;
            }
            else{
                right++;
            }

            if(left!=1 && left!=right){
                ans+=x;
            }
            if(left==right){
                left=0;
                right=0;
            }
        }
        return ans;
    }
};