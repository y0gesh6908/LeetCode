class Solution {
public:
    int numTriplets(vector<int>& nums1, vector<int>& nums2) {
        long long int ans=0;

        unordered_map<long long,int>mp;

        for(int i=0;i<nums2.size()-1;i++){
            for(int j=i+1;j<nums2.size();j++){
                long long temp=1LL * nums2[i]*nums2[j];
                mp[temp]++;
            }
        }
        for(int i=0;i<nums1.size();i++){
            long long temp=1LL *nums1[i]*nums1[i];

            if(mp.count(temp)){
                ans+=(mp[temp]);
            }
        }

        unordered_map<long long,int>mp2;

        for(int i=0;i<nums1.size()-1;i++){
            for(int j=i+1;j<nums1.size();j++){
                long long temp=1LL * nums1[i]*nums1[j];
                mp2[temp]++;
            }
        }
        for(int i=0;i<nums2.size();i++){
            long long temp=1LL *nums2[i]*nums2[i];

            if(mp2.count(temp)){
                ans+=(mp2[temp]);
            }
        }
        
        return ans;
    }
};