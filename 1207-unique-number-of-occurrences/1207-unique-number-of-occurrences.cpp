class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> freq;
        for (int n : arr) {
            freq[n]++;
        }
        unordered_set<int> seen;
        for (auto &[key, value]: freq) {
            seen.insert(value);
        }
        return seen.size()==freq.size();
    }
};