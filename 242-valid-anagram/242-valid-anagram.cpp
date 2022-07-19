class Solution {
public:
    bool isAnagram(string s, string t) {
        string c=s;
        sort(c.begin(),c.end());
        sort(t.begin(),t.end());
        return t==c;
    }
};