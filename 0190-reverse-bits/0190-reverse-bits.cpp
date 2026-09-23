class Solution {
public:
    int reverseBits(int n) {
        long long result = 0;
        for(int i = 0; i < 32; i++){
            result <<= 1;
            result |= (n & 1);
            n >>= 1;
        }
        return result;
    }
};