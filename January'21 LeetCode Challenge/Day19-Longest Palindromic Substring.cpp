class Solution {
public:
    string longestPalindrome(string s) {
        
        int n = s.size();
        string ans = "";
        
        bool dp[n][n];
        memset(dp, 0, sizeof dp);
        
        for(int g=0;g<n;g++){
            for(int i=0,j=g;j<n;i++,j++){
                string tmp;
                if(g == 0){
                    dp[i][j] = true;
                  
                }else if(g == 1){
                    
             
                    dp[i][j] =(s[i]==s[j]);
                       
                    
                }else{
                    if(s[i] == s[j] && dp[i+1][j-1]==true){
                        dp[i][j] = true;
                      
                    }else{
                        dp[i][j] = false;
                    }
                }
                
                if(dp[i][j] == true){
                    int len = g + 1;
                    if(ans.size() < len){
                        ans = s.substr(i,j-i+1);
                    }
                }
            }
        }
        
        
        return ans;
    }
};
