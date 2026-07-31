class Solution{
    int combination(int n, int r) {
        // Using principle of Pascal's triangle
        if(r==0 || n==r) return 1;
        else return combination(n-1, r-1)+combination(n-1,r);
    }
};
