class Solution {
public:
    int reachNumber(int target) {
        int steps=0,curr=0;
        target=abs(target);
        while(curr<target)
        {
            curr+=steps;
            steps++;
        }
        while((curr-target)%2==1)
        {
            curr+=steps;
            steps++;
        }
        return steps-1;
    }
};
