class Solution {
public:
    int maxElement(vector<int> &arr) {
        int maximum = arr[0];
        for (int n : arr) {
            maximum = max(maximum, n);
        }
        return maximum;
    }

    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        vector<int> altitude(n+1);
        altitude[0] = 0;
        for (int i=1; i<=n; i++) {
            altitude[i] = altitude[i-1]+gain[i-1];
        }
        return maxElement(altitude);
    }
};