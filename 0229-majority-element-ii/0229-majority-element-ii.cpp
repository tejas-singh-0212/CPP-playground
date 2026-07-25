class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int count1 = 0, count2 = 0, element1 = INT_MIN, element2 = INT_MIN, n=arr.size();
        for(int i = 0; i<n; i++) {
            if(count1 == 0 && arr[i] != element2) {
                count1++;
                element1 = arr[i];
            } else if (count2==0 && arr[i] != element1 ) {
                count2++;
                element2 = arr[i];
            } else if (element1 == arr[i]) {
                count1++;
            } else if (element2 == arr[i]) {
                count2++;
            } else {
                count1--;
                count2--;
            }
        }
        vector<int> ans;
        count1 = 0, count2 = 0;
        for(int i = 0; i<n; i++) {
            if(element1 == arr[i]) count1++;
            if(element2 == arr[i]) count2++;
        }
        int mini = n/3 + 1;
        if(count1 >= mini) ans.emplace_back(element1);
        if(count2 >= mini) ans.emplace_back(element2);
        return ans;
    }
};