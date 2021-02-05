class Solution {
public:
    string simplifyPath(string path) {
        int n = path.size();
        stack<string> s;
        
        if(path[n-1] != '/'){
            path += '/';
            n++;
        }
        
        string tmp = "";
        string ans = "";
        int i=1;
        
        while(i < n){
            
            if(path[i] =='/'){
                
                if(tmp == "" || tmp == "."){
                    
                }else if(tmp == ".."){
                    if(!s.empty()) s.pop();
                }else{
                    s.push(tmp);
                }
                tmp = "";
                
            }else{
                tmp.push_back(path[i]);
            }
            
            i++;
        }
        
        while(!s.empty()){ 
            ans="/"+s.top()+ans;
            s.pop();
        }
        
        if(ans.length()==0) 
            ans="/"; 
        
        return ans;
        
    }
};
