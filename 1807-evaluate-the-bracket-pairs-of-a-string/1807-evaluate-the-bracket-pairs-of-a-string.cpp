;
class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        unordered_map<string,string>mp;
        string temp="";
        for(auto x:knowledge){
            mp[x[0]]=x[1];
        }
        string ans="";
        bool bracket=false;
        int i=0;
        while(i<s.size()){
            if(s[i]=='('){
                bracket=true;
                i++;
            }
            else if(s[i]==')'){
                bracket=false;
                i++;
                if(mp.count(temp)){
                    ans+=mp[temp];
                }
                else{
                    ans+='?';
                }
                temp="";
            }
            else if(!bracket){
                ans+=s[i];
                i++;
            }
            else{
                temp+=s[i];
                i++;
            }
        }
        return ans;

    }
};