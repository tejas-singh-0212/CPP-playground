class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int sum_1=0;
        for (int i=0; i<=nums.size();i++){
            sum_1 += i;
        }
        int sum2=0;
        for(int j : nums){
            sum2 += j;
        }
        return sum_1-sum2;
    }
};