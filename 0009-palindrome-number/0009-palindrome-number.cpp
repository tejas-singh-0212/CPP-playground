class Solution {
public:
    bool isPalindrome(int n) {
        long revNum = 0;
        int dup = n;
        while(n>0) {
            int ld = n%10;
            revNum = (revNum * 10) + ld;
            n /= 10;
        }
        if (dup == revNum) return true;
        return false;
    }
};