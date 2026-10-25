class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());
        vector<vector<int>> v;
        v.push_back(intervals[0]);
        int j = 0;

        for(int i = 1; i < intervals.size(); i++) {

            if(intervals[i][0] <= v[j][1]) {

                if(intervals[i][1] < v[j][1]) {
                    continue;
                } 
                else {
                    v[j] = {v[j][0], intervals[i][1]};
                }
            }
        
            else {
                v.push_back(intervals[i]);
                j++;
            }
        }

        return v;
    }
};
