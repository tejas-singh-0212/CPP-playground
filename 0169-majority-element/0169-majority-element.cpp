class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int count = 0;
        int element = arr[0];
        int n = arr.size();
        for(int i=0; i<n; i++) {
            if(count == 0) {
                count = 1;
                element = arr[i];
            }
            else if (arr[i] == element) {
                count++;
            } else {
                count--;
            }
        }
        int counter = 0;
        for (int i = 0; i<n; i++) {
            if (arr[i] == element) {
                counter++;
            }
        }
        if (counter > n/2) return element;
        return -1;
    }
};