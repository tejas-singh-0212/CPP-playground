class Solution{
    double calculate_e(int x, int n) {
        // Calculation x^n by taylor series - method 1
        static double p=1, f=1;
        double r;
        if(n==0) return 1;
        else {
            r = calculate_e(x, n-1);
            p *= x;
            f *= n;
            return r+p/f;
        }
    }
};
