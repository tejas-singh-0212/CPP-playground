class Solution {
public:
    bool isValid(string s) {
        int n=s.size();
        string close="c";
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            close.push_back(')');
            else if(s[i]=='{')
            close.push_back('}');
            else if(s[i]=='[')
            close.push_back(']');
            else if(s[i]==close[close.size()-1])
            close.pop_back();
            else
            return false;
        }
        if(close=="c")
        return true;
        else
        return false;

    }
};