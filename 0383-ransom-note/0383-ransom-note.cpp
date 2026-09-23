class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        for (char ch : ransomNote) {
            auto pos = magazine.find(ch);
            if (pos != -1) {
                magazine.erase(pos, 1);
            } else {
                return false;
            }
        }
        return true;
    }
};