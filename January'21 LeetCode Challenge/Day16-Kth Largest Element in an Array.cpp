class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        
        if(k==0)return -1;
        sort(nums.begin(),nums.end());
        int n = nums.size();
        
        int v = n-k;
        return nums[v];
        
        
        
    }
};
