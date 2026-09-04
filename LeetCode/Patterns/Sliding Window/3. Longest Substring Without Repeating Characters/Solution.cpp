class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int>m(256,-1);
        int l=0;
        int r=0;
        int len=0;
        int maxLen=0;

        while(r < s.size()){
            if(m[s[r]]!=-1){
                if(m[s[r]] >=l ){
                    l=m[s[r]]+1;
                }
            }
            len=r-l+1;
            maxLen=max(maxLen,len);
            m[s[r]]=r;
            r++;
        }return maxLen;
    }
};