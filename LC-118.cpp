// 118. Pascal's Triangle

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> pascal;
        vector<int> first, temp, prev;
        first.push_back(1);
        pascal.push_back(first);
        first.clear();
        for (int i = 0; i < (numRows-1); i++) {
            prev = pascal[i];
            temp.push_back(1);
            for (int j = 1; j < prev.size(); j++) {
                temp.push_back(prev[j-1]+prev[j]);
            }
            temp.push_back(1);
            pascal.push_back(temp);
            temp.clear();
        }

        return pascal;
    }
};
