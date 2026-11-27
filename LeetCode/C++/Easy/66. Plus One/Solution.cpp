class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int last_indx=digits.size()-1;
        
        if(digits[last_indx]<9){
            digits[last_indx]++;
            return digits;
        }else if(digits[last_indx]==9){
            int curr_indx=last_indx;
            while(digits[curr_indx]==9){
                if(curr_indx==0){
                    vector<int>ans(digits.size()+1,0);
                    ans[0]=1;
                    return ans;
                }else{
                    digits[curr_indx]=0;
                    curr_indx--;
                }
            }digits[curr_indx]++;
            return digits;
        }return digits;
    }
};