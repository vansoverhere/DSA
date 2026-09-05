class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int l=0; int r=0;
        unordered_map<int,int> m;
        int maxlen=0; int len=0;

        while(r < fruits.size()){
            m[fruits[r]]++;
            if(m.size() <=2){
                len=r-l+1;
                maxlen=max(maxlen,len);
            }
            if(m.size() > 2){
                m[fruits[l]]--;
                if(m[fruits[l]]==0){
                    m.erase(fruits[l]);
                }
                l++;
            }
            r++;
        }return maxlen;
    }
};