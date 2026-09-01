class Solution{
    // Finding duplicates in unsorted array
    set<int> findingDuplicatesInUnsorted(vector<int> &arr) {
        set<int> ans;
        int n = arr.size();
        for(int i = 0; i < n; i++) {
            int count = 1;
            if(arr[i] != -1) {
                for (int j = i+1; j < n; j++) {
                    if(arr[i]==arr[j]) {
                        count++;
                        arr[j]=-1;
                    }
                    if(count > 1) {
                        ans.insert(arr[i]);
                    }
                }
            }
        }
        return ans;
    }
};
