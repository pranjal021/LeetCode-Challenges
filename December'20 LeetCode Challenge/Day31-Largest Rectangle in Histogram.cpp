class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int area = 0;
        int maxArea = 0;
        int height = 0;
        stack<int> s;
        
        s.push(-1);
        
        for(int i=0;i<heights.size();i++){
            while(s.top() != -1 && !(heights[i] > heights[s.top()])){
                height = heights[s.top()];
                s.pop();
                area = height * (i - s.top() -1);
                maxArea = maxArea > area ? maxArea : area;
            }
            s.push(i);
        }
        
        while(s.top() != -1){
            height = heights[s.top()];
            s.pop();
            area = height * (heights.size() - s.top() - 1);
            maxArea = maxArea > area ? maxArea : area;
        }
        return maxArea;
    }
};

