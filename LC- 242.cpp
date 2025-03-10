class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        unordered_map<char, int> alpha;

        for(char c:s){
            alpha[c]+=1;
        }
        for(char c:t){
            if(alpha.count(c) && alpha[c]>0) alpha[c]--;
            else    return false;
        }
        return true;
    }
};
