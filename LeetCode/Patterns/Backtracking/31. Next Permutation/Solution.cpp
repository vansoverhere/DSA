class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int len=nums.size();
        int ptr1=-1;
        int ptr2=-1;
        for(int i=len-1;i>=1;i--){
            if(nums[i-1]<nums[i]){
                ptr1=i-1;
                break;
            }
        }
        if(ptr1==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int j=len-1;j>ptr1;j--){
            if(nums[ptr1]<nums[j]){
                ptr2=j;
                break;
            }
        }
        swap(nums[ptr1],nums[ptr2]);
        reverse(nums.begin()+ptr1+1,nums.end());

    }
    void swap(int &num1,int &num2){
        int temp=num1;
        num1=num2;
        num2=temp;
    }
};