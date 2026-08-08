class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int> positives;
        vector<int> negatives;  

        for(int i=0;i<n;i++){
            if(nums[i]>0){
                positives.push_back(nums[i]);
            }else{
                negatives.push_back(nums[i]);
            }
        }
        vector<int>ans(n);
        int pos=0;
        int neg=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans[i]=positives[pos];
                pos++;
            }else{
                ans[i]=negatives[neg];
                neg++;
            }
        }return ans;
    }
};