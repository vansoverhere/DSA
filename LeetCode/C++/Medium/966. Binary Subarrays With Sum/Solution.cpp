class Solution {

int lessThanEqlToCnt(vector<int>& nums, int goal){
    int r=0; int l=0;
    int cnt=0; int sum=0;

    while(r<nums.size()){
        if(goal < 0) return 0;
        sum+=nums[r];

        while(sum > goal){
            sum=sum-nums[l];
            l++;
        }
        cnt+=r-l+1;
        r++;
    }
    return cnt;
}

public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return lessThanEqlToCnt(nums,goal)-lessThanEqlToCnt(nums,goal-1);
    }
};