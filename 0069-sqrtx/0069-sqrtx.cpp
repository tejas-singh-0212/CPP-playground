class Solution {
public:
    int mySqrt(int x) {
        int left = 0, right =  x, result = 0;
        while (left <= right){
            int mid = left + (right - left)/2;
            long long mid_squared = 1LL * mid * mid;
            if (mid_squared == 1LL*x) return mid;
            else if (mid_squared < 1LL*x) {
                left =  mid + 1;
                result = mid;
            } else right = mid - 1;
        }
        return result;
    }
};