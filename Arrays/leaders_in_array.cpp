#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> leaders(vector<int>& a) {
        // Leader is the element greater than all elements to its right
        vector<int> ans;
        int maxi = INT_MIN;
        for(int i = a.size()-1; i>=0; i--) {
            if(a[i] > maxi) {
                ans.emplace_back(a[i]);
            }
            maxi = max(maxi, a[i]);
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};