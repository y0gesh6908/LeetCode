class Solution {
public:
    int numSub(string s) {
        const int MOD=1e9+7;
        vector<long long>temp(100001,0);
        long long int sum=0;
        for(int i=1;i<=100000;i++){
            sum+=i;
            temp[i]=sum;
        }

        long long int len=0;
        long long int ans=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                len++;
            }

            else{
                ans+=temp[len];
                len=0;
            }
        }
        ans+=temp[len];
        return ans%MOD;
    }
};