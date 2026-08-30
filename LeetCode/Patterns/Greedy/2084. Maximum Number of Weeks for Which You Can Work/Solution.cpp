class Solution {
public:
    long long numberOfWeeks(vector<int>& milestones) {
        long long sum=0;
        int maxi=milestones[0];
        for (int i=0; i<milestones.size(); i++){
            sum+=milestones[i];
            if(milestones[i]>maxi) maxi=milestones[i];
        }

        long long others=sum-maxi;

        if(others >= maxi-1 ) return sum;
        else return 2*others+1;
    }
};