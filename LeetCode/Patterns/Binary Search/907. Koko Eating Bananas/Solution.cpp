class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=maximum(piles);
        while(low<=high){
            long long mid=(low+high)/2;
            long long totalHrs=calcTotalHrs(piles,mid);
            if(totalHrs<=h){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }return low;
    }

    long long calcTotalHrs(vector<int>v, int val){
        long long total=0;
        for(long long i=0;i<v.size();i++){
            total+=ceil((double) v[i]/(double) val );
        }return total;
    }

    int maximum(vector<int> v){
        int maxi=INT_MIN;
        for(int i=0;i<v.size();i++){
            maxi=max(maxi,v[i]);
        }
        return maxi;
    }
};