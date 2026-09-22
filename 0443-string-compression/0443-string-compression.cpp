class Solution {
public:
    int compress(vector<char>& chars) {
        int write=0;
        int n = chars.size();

        for (int read=0; read<n;) {
            char current=chars[read];
            int start = read;
            while (read<n && current==chars[read]) {
                read++;
            }
            int count = read-start;
            chars[write++]=current;
            if (count>1) {
                string s = to_string(count);
                for(char c: s) {
                    chars[write++] = c;
                }
            }
        }
        return write;
    }
};