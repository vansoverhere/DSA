class Solution {
public:
    int minimumPushes(string word) {
        int cnt=word.size();
        int push=1;
        int ans=0;

        while(cnt>0){
            int take=min(8,cnt);
            ans+=take * push;
            cnt-=take;
            push++;
        } return ans;
    }
};