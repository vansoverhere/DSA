class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0;
        int high=nums.size()-1;
        int mid;

        while(low<=high){
            mid=(low+high)/2;
            if(mid==low) return nums[mid];
            if(mid==high) return nums[mid];
            if(nums[mid]!=nums[mid-1] && nums[mid]!=nums[mid+1]) return nums[mid];

            if(mid%2==0){
                if(nums[mid]==nums[mid+1]){
                    low=mid+2;
                }else if(nums[mid]==nums[mid-1]){
                    high=mid-2;
                }
            }else if(mid%2!=0){
                if(nums[mid]==nums[mid+1]){
                    high=mid-1;
                }else if(nums[mid]==nums[mid-1]){
                    low=mid+1;
                }
            }else{
                return nums[mid];
            }
            
        }return nums[mid];
    }
};