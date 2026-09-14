class Solution {
public:
    int characterReplacement(string s, int k) {
        int r=0;int l=0;
        int len=0; int maxlen=0; int maxFreq=0;
        vector<int> hash(26);

        while(r < s.size()){
            hash[s[r]-'A']++;
            len = r-l+1;
            maxFreq=max(maxFreq,hash[s[r]-'A']);

            if((len-maxFreq) <= k){
                maxlen=max(maxlen,len);
            }else{
                hash[s[l]-'A']--;
                l++;
            }
            r++;
        }return maxlen;
    }
};