class Solution {
int leftlongest(string s){
    int left=0;
    int right=0;
    int maxi=0;
    int cnt=0;

    for(right=0;right<s.size();right++){
        if(s[right]=='('){
            cnt++;
        }
        else{
            cnt--;
        }

        if(cnt<0){
            cnt=0;
            left=right+1;
        }
        if(cnt==0){
            maxi=max(maxi,right-left+1);
        }

    }
    return maxi;

}
int rightlongest(string s){
    reverse(s.begin(), s.end());
    int left=0;
    int right=0;
    int maxi=0;
    int cnt=0;

    for(right=0;right<s.size();right++){
        if(s[right]==')'){
            cnt++;
        }
        else{
            cnt--;
        }

        if(cnt<0){
            cnt=0;
            left=right+1;
        }
        if(cnt==0){
            maxi=max(maxi,right-left+1);
        }

    }
    return maxi;

}
public:
    int longestValidParentheses(string s) {
        return max(leftlongest(s),rightlongest(s));
    }
};