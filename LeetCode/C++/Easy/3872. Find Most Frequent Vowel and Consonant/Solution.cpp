class Solution {
public:
    int maxFreqSum(std::string s) {
        unordered_map<char,int> m;

        for(char c: s){
            m[c]++;
        }
        int countVow=0;
        int countCons=0;
        for(auto it:m){
            if(it.first=='a' || it.first=='e'|| it.first=='i'|| it.first=='o'|| it.first=='u'){
                countVow=max(it.second,countVow);
            }else{
                countCons=max(it.second,countCons);
            }
        }
        return countVow+countCons;
    }
};