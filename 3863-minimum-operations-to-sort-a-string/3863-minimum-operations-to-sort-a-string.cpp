class Solution {
public:
    int minOperations(string s) {
        int mn=s[0];
        int mx=s[0];
        bool issorted=true;
        int n=s.size();
        for(int i=1;i<n;i++){
            if(s[i]<s[i-1]){
                issorted=false;
            }

            if(s[i]<mn){
                mn=s[i];
            }
            if(s[i]>mx){
                mx=s[i];
            }

        }

        if(issorted){
            return 0;
        }
        if(n==2){
            return -1;
        }

        if(s[0]==mn || s[n-1]==mx){
            return 1;
        }

        for(int i=1;i<n-1;i++){
            if(s[i]==mn|| s[i]==mx){
                return 2;
            }
        }

        return 3;
    }
};