class Solution{
    double calculate_e(int x, int n) {
        // Taylor series method - 2
        static double s = 1;
        if(n==0) return s;
        else {
            s = 1 + x*s/n;
            return calculate_e(x, n-1);
        }
    }
};
