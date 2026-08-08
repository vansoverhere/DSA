class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();

        // Pre-allocate exact sizes (no push_back)
        vector<int> pos(n / 2);
        vector<int> neg(n / 2);

        int p = 0, q = 0;

        // Fill positives and negatives with direct assignment
        for (int x : nums) {
            if (x > 0)
                pos[p++] = x;
            else
                neg[q++] = x;
        }

        vector<int> ans(n);
        p = 0; 
        q = 0;

        // Fill answer: even → positive, odd → negative
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                ans[i] = pos[p++];
            else
                ans[i] = neg[q++];
        }

        return ans;
    }
};
