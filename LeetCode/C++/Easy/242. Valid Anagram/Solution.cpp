class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size()){
            return false;
        }
        unordered_map<char,int> m1;
        for(char c:s){
            m1[c]++;                   
        }
        
        for(char c:t){
            m1[c]--;
        }
        for(auto &it:m1){
            if(it.second!=0){
                return false;
            }
        }return true;
    }
};