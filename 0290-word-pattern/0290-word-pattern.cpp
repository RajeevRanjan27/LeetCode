class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, string> dic; // the projection map, key is the char in pattern and the value is a word
        set<string> word_set;
        set<char> pattern_set;
        vector<string> words;
        istringstream iss(s);
        string word;
        while (iss >> word) {  words.push_back(word); word_set.insert(word); }
        for (int i = 0; i < pattern.length(); i ++) pattern_set.insert(pattern[i]);
		// 'aa' -> 'dog', 'ab' -> 'dog dog', 'abc'- > 'cat dog cat'
        if (words.size() != pattern.length() || word_set.size() != pattern_set.size()) return false;
        for (int i = 0; i < words.size(); i++) {
            if (dic.count(pattern[i]) > 0) { // pattern[i] has been projected to some word
                if (dic[pattern[i]] != words[i]) return false; // 'aba' -> 'cat dog dog'
            } else {
                dic[pattern[i]] = words[i];
            }
        }
        return true;    
    } 
};