class Solution {
public:
    int merge(int a, int b) {
        string s = to_string(a), t = to_string(b);
        string ans = s+t;
        int final = stoi(ans);
        return final;
    }
    int minMergedInteger(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX;
        for (int i=1; i<n; i+=2) {
            mini = min(mini, merge(nums[i-1], nums[i]));
        }
        return mini;
    }
};