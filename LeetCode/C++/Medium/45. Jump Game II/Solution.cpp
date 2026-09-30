class Solution {
public:
    int jump(vector<int>& nums) {
        int prevfarthest=nums[0];;
        int nextfarthest=0;
        int jumps=1;

        if(nums.size()==1) return 0;

        for(int i=1; i<nums.size()-1; i++){
            nextfarthest = max(nextfarthest,i+nums[i]);
            if(i==prevfarthest){
                jumps++;
                prevfarthest=nextfarthest;
            }
            if(prevfarthest >= nums.size()-1){
                break;
            }
        }
        return jumps;
    }
};