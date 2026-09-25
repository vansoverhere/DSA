class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int n=nums.size();
        int high=n-1;
        int mid,low_bound,high_bound;
        vector<int>ans(2,-1);

        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>=target){
                low_bound=mid;
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        if(low>=n || nums[low_bound]!=target)return ans;

        low=0;
        high=nums.size()-1;

        while(low<=high){
            mid=(low+high)/2;
            if(nums[mid]>target){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        high_bound=high;

        ans[0]=low_bound;
        ans[1]=high_bound;
        return ans;
    }
};