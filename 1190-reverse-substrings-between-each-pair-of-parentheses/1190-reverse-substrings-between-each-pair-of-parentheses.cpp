class Solution {
public:
    string reverseParentheses(string s) {
        stack<char>st;
        string temp="";

        for(int i=0;i<s.size();i++){
            if(s[i]!=')'){
                st.push(s[i]);
            }
            else{
                while(st.top()!='('){
                    temp+=st.top();
                    st.pop();
                }
                st.pop();

                for(int i=0;i<temp.size();i++){
                    st.push(temp[i]);
                }
                temp="";
            }
        }

        string ans="";
        while(!st.empty()){
            if(st.top()!='('){
                ans+=st.top();
                st.pop();
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};