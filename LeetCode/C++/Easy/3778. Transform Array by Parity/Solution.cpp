class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int zeroCnt=0;
        for(int i=0;i<nums.size(); i++){
            if(nums[i]%2==0){
                nums[i]=0;
                zeroCnt++;
            }else{
                nums[i]=1;
            }
        }
        int i=0;
        while(zeroCnt>0){
            nums[i]=0;
            zeroCnt--;
            i++;
        }
        while(i<nums.size()){
            nums[i]=1;
            i++;
        }
        return nums;
    }
};