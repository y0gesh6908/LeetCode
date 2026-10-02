class Solution {
private:
    void solve(vector<string>&ans,string &temp,int n,int open,int close){
        if(temp.length()==2*n){
            ans.push_back(temp);
        }

        if(open <n ){
            temp.push_back('(');
            solve(ans,temp,n,open+1,close);
            temp.pop_back();
        }
        if(close<open){
            temp.push_back(')');
            solve(ans,temp,n,open,close+1);
            temp.pop_back();
        }
       
    }
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string temp="";
        solve(ans,temp,n,0,0);

        return ans;
    }
};