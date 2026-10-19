class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int cnt=1;
        int ptr1=0;
        int ptr2=1;

        if(nums.size()==1){
            return 1;
        }

        for(int i=1;i<nums.size();i++){
            if(nums[ptr2] != nums[ptr1]){
                swap(nums[ptr1+1],nums[ptr2]);
                ptr1++;
                ptr2++;
                cnt++;
            }else{
                ptr2++;
            }
        }return cnt;
    }
};