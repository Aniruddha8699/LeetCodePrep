// 287. Find the Duplicate Number
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        int n = nums.size();
        for (auto num:nums){
            if(seen.find(num)!=seen.end()) return num;
            seen.insert(num);
        }
        return -1;
    }
};
