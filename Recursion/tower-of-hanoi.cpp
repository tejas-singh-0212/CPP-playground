class Solution{
    // TOH(1, A, B, C) - move 1 disc from A to C using B
    void TOH(int n, char A, char B, char C) {
        if (n > 0) {
            TOH(n-1, A, C, B);
            cout << A << " -> " << C << "\n";
            TOH(n-1, B, A, C);
        }
    }
};
