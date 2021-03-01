class Solution {
public:
    int distributeCandies(vector<int>& candyType) {
        
        int n = candyType.size();
        
        unordered_map<int,int> m;
        
        for(auto x : candyType){
            m[x]++;
        }
        
        if(m.size() == 1){
            return 1;
        }
        
        return m.size() > n/2 ? n/2 : m.size();
    }
};