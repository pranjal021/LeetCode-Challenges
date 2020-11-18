class Solution {
public:
    
    static bool myComp(vector<int> &a,vector<int> &b){
        
        return a[0] < b[0];
        
    }
    
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        
        if(intervals.size() == 0) return ans;
        if(intervals.size() == 1) return intervals;
        
        sort(intervals.begin(),intervals.end(),myComp);  
        
        ans.push_back(intervals[0]);
        int i=1;
            
        while(i<intervals.size()){
            
            vector<int> &last = ans.back();
            
            if(last[1] < intervals[i][0]){
                ans.push_back(intervals[i]);
            }else{
                last[1] = max(last[1],intervals[i][1]);
            }
            i++;
        }
        
        return ans;
    }
};
