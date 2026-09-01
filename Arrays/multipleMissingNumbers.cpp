class Solution{
    // Find multiple missing numbers from array
    vector<int> multipleMissingNumbers(vector<int> &arr) {
        vector<int> ans;
        int diff = arr[0]-0;
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (arr[i]-i != diff) {
                while(diff < arr[i]-i) {
                    ans.emplace_back(i+diff);
                    diff++;
                }
            }
        }
        return ans;
    }
};
