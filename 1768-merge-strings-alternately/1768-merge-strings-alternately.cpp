class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n1=word1.size();
        int n2=word2.size();
        string merged="";
        int l1=0, l2=0;
        while (l1<n1 && l2<n2) {
            merged += word1[l1];
            l1++;
            merged += word2[l2];
            l2++;
        }
        while (l1<n1) {
            merged += word1[l1];
            l1++;
        }
        while (l2<n2) {
            merged += word2[l2];
            l2++;
        }
        return merged;
    }
};