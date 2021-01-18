class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        
        unordered_map<int,int> m;
        int ans = 0;
        
        for(auto x:nums){
            m[x]++;
        }
        
        for(auto it = m.begin() ; it != m.end() ; it++){
            int num = it->first;
            int count = it->second;
            
            if(k - num == num) ans += count/2;
            else if(m.count(k-num)){
                int v = min(m[num], m[k-num]);
                ans += v;
                m[num] -= v;
                m[k-num] -= v;
            }
        }
        
        return ans;
    }
};
