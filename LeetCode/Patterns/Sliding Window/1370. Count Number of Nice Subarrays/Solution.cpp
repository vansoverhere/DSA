class Solution {

int lessThanEqlTo(vector<int>& nums, int k){
    int oddCnt=0; int cnt=0;
    int r=0; int l=0;

    while(r< nums.size()){
        if(nums[r] % 2 != 0){
            oddCnt++;
        }
        while(oddCnt > k){
            if(nums[l] % 2 !=0){
                oddCnt--;
            }
            l++;
        }
        cnt+=r-l+1;
        r++;
    }
    return cnt;
}

public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        return lessThanEqlTo(nums,k) - lessThanEqlTo(nums, k-1);
    }
};