class Solution {
public:
    int candy(vector<int>& ratings) {
        int prev=1;
        int i=1;
        int n=ratings.size();
        int sum=1;

        while(i<n){
            while(i<n && ratings[i] == ratings[i-1]){
                sum++;
                prev=1;
                i++;
            }
            int peak=1;
            while(i<n && ratings[i] > ratings[i-1]){
                prev++;
                sum+=prev;
                peak=prev;
                i++;
            }
            prev=0;
            while(i<n && ratings[i] < ratings[i-1]){
                prev++;
                sum+=prev;
                i++;
            }
            prev=prev+1;
            if(prev > peak){
                sum+=prev-peak;
            }
            prev=1;

        }
        return sum;

    }
};