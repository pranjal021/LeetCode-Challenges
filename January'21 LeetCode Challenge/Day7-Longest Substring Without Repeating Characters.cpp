class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        if(n == 0) return 0;
        
        int i = 0, j = 0;
        int maxSize = 0;
        set<char> st;
        
        while(j < n){
            
            if(st.count(s[j]) == 0){
                st.insert(s[j]);
                j++;
                maxSize = max(maxSize , (int)st.size());
            }else{
                st.erase(s[i]);
                i++;
            }
            
        }
        
        return maxSize;
    }
};
