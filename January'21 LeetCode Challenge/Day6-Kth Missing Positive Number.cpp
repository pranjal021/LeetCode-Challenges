class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
        int i = 1;
        int ans;
        while(k){
            if(std::find(arr.begin(),arr.end(),i) == arr.end()){
                ans = i;
                k--;
            }
            if(k==0)break;
            i++;
        }
        return ans;
    }
};
