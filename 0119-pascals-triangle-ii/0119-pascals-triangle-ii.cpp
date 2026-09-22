class Solution {
public:
    vector<int> getRow(int k) {
        vector<int> ans;
        ans.emplace_back(1);
        long result=1;
        for(int i=1; i<=k;i++){
            result = (result * (k-i+1))/i;
            ans.emplace_back(result);
        }
        return ans;
    }
};