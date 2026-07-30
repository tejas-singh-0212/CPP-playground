class Solution {
public:
    void merge(vector<int>& a1, int n, vector<int>& a2, int m) {
        int left = n;
        int right = 0;
        while(left < n+m && right < m) {
            a1[left++] = a2[right++];
        }
        sort(a1.begin(), a1.end());
    }
};