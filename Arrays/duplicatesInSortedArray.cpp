class Solution{
    // Finding duplicates in sorted array
    vector<int> findingDuplicates(vector<int> &arr) {
        vector<int> ans;
        int lastDuplicate = 0;
        int n = arr.size();
        for(int i = 0; i < n-1; i++) {
            if (arr[i]==arr[i+1] && arr[i]!=lastDuplicate) {
                ans.emplace_back(arr[i]);
                lastDuplicate = arr[i];
            }
        }
        return ans;
    }
};
