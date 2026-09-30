class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        vector<int>ans;
        int curr=1;
        for(char x:seq){
            if(x=='('){
                ans.push_back(1-curr);
            }
            else{
                ans.push_back(curr);
            }

            if(curr==1){
                curr=0;
            }
            else{
                curr=1;
            }
        }

        return ans;
    }
};