class Solution {
public:
    string minWindow(string s, string t) {
        if(t.size() > s.size()) return "";
        unordered_map <char,int> m;
        int l=0; int r=0;
        int cnt=0;
        int sIndx=-1;
        int minLen=INT_MAX;

        for(int i=0; i<t.size(); i++){
            m[t[i]]++;
        }

        while(r < s.size()){
            if(m[s[r]] > 0){
                cnt++;
            }
            m[s[r]]--;

            while(cnt==t.size()){
                int len=r-l+1;
                
                if(len<minLen){
                    minLen=min(len,minLen);
                    sIndx=l;
                }
                m[s[l]]++;
                if(m[s[l]] > 0){
                    cnt--;
                }
                l++;
            }
            r++;
        }
        string ans="";
        if(minLen==INT_MAX) return "";
        for(int i=sIndx; i<sIndx+minLen; i++){
            ans+=s[i];
        }
        return ans;
    }
};