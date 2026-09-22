class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());

        int ans=0;
        int x=piles.size();
        int n=(piles.size())/3;
        int j=x-2;
        while(n>0){
            ans+=piles[j];
            
            j-=2;
            
            
            n--;
        }

        return ans;
    }
};