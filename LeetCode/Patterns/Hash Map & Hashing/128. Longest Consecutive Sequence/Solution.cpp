class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        if(nums.size()==0){
            return 0;
        }
        for(int i=0;i<nums.size();i++){
            st.insert(nums[i]);
        }
        int currCount=0;
        int maxCount=-1;
        for(int x:st){
                if(st.find(x-1)==st.end()){
                    currCount++;
                    while(st.find(x+1)!=st.end()){
                        currCount++;
                        x++;
                    }
                    maxCount=max(currCount,maxCount);
                    currCount=0;
                }
        }return maxCount;  
    }
};