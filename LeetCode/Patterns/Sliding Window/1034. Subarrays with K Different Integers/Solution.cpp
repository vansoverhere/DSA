class Solution {

int lessThanEqlTo(vector<int>& nums, int k){
    unordered_map <int, int> m;

    int r=0; int l =0;
    int cnt=0;

    while(r < nums.size()){
        m[nums[r]]++;

        while(m.size() > k){
            m[nums[l]]--;
            if(m[nums[l]]==0){
                m.erase(nums[l]);
            }
            l++;
        }
        cnt+=r-l+1;
        r++;
    }
    return cnt;
}

public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return lessThanEqlTo(nums,k)-lessThanEqlTo(nums, k-1);
    }
};