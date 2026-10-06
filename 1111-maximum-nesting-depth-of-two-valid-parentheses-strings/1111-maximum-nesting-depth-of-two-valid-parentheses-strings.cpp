class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int cur = 0;
        vector<int> res;
        for (int i=0; i<seq.size(); i++) {
            char ch = seq[i];
            if (ch == '(') {
                cur++;
                res.emplace_back(cur % 2);
            } else {
                res.emplace_back(cur % 2);
                cur--;
            }
        }
        return res;
    }
};