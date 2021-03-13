class Solution {
public:
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        map<int,long> dp;
        int ans=0;
        int mod=pow(10,9)+7;
        for(int i = 0;i<arr.size();i++){
            dp[arr[i]]=1;
            for(int j=0;j<i;++j){
                if(arr[i]%arr[j]==0){
                    dp[arr[i]] = (dp[arr[i]]+dp[arr[j]]*dp[arr[i]/arr[j]])%mod;
                }
            }
            ans=(ans+dp[arr[i]])%mod;
        }
        return ans;
    }
};
