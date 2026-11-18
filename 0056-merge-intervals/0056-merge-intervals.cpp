class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>ans;
        int curr=intervals[0][1];
        int prev=intervals[0][0];
        for(int i=1;i<intervals.size();i++){
            if(intervals[i][0]<=curr){
                if(intervals[i][1]>curr){
                    curr=intervals[i][1];
                }
                
            }
            // else if(intervals[i][0]<=curr && intervals[i][1]>curr){
        
            // }
            else{
                ans.push_back({prev,curr});
                curr=intervals[i][1];
                prev=intervals[i][0];
            }
        }
        ans.push_back({prev,curr});
        return ans;
    }
};