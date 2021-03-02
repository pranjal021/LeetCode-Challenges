class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        
        int n = nums.size();
        int sum = 0;
        int dup = -1;
        
        sort(nums.begin(), nums.end());
        
        for(int i=0;i<n-1;i++){
            if(nums[i] == nums[i+1]){
                dup = nums[i];
                break;
            }
        }
        
        sum = (n*(n+1))/2;
        
        for(int i=0;i<n;i++){
            sum -= nums[i];
        }
        
        return {dup, sum+dup};
    }
};
