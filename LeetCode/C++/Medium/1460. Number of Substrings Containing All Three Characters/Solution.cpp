class Solution {
public:
    int numberOfSubstrings(string s) {
        vector<int> v(3,-1);
        int total=0;
        for(int i=0; i<s.size(); i++){
            int cnt=0;
            v[s[i]-'a']=i;
            if(v[0]!=-1 && v[1]!=-1 && v[2]!=-1){
                cnt=min(min(v[0], v[1]), v[2]) +1;
                total+=cnt;
            }
        }return total;
    }
};