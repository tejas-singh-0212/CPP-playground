class Solution {
public:
    vector<int> generateRow(int k) {
        vector<int> ans;
        ans.emplace_back(1);
        int result=1;
        for(int i=1; i<k;i++){
            result = result * (k-i);
            result = result / i;
            ans.emplace_back(result);
        }
        return ans;
    }
    vector<vector<int>> generate(int n) {
        vector<vector<int>> ans;
        for(int i=1; i<=n; i++) {
            ans.emplace_back(generateRow(i));
        }
        return ans;
    }
};