class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[27]={0};
        
        int l1 = s.length();
        int l2 = t.length();
        if(l1!=l2){
            return false;
        }
        
        for(int i=0; i<l1 ;i++){
            char ch = s[i];
            int digit = ch - 'a';
            freq[digit]++; 
        }
        for(int i=0; i<l2 ;i++){
            char ch = t[i];
            int digit = ch - 'a';
            freq[digit]--;
        }
        
        
        for(int i=0;i<27;i++){
            if(freq[i]!=0){
                return false;
            }
        }
        
        return true;
    }
};
