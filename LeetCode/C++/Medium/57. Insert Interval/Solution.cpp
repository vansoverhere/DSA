class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        int n=intervals.size();
        vector<vector<int>> ans;
        int i=0;

        while(i<n && intervals[i][1] < newInterval[0]){
            ans.push_back(intervals[i]);
            i++;
        }
        int minInt=newInterval[0];
        int maxInt=newInterval[1];

        while(i<n && newInterval[1] >= intervals[i][0]){
            minInt=min(intervals[i][0], minInt);
            maxInt=max(intervals[i][1], maxInt);
            i++;
        }
        ans.push_back({minInt,maxInt});

        while(i<n && newInterval[1] < intervals[i][0]){
            ans.push_back(intervals[i]);
            i++;
        }
        return ans;
    }
};