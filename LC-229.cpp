// 229. Majority Element II

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        map <int,int> mp;
        for (int i=0; i<nums.size(); i++){
            mp[nums[i]] +=1;
        }
        map<int, int>::iterator it = mp.begin();
        vector<int> result;
        int size = nums.size();
        while (it != mp.end()) {
            if (it->second > (size/3)) {
                result.push_back(it->first);
            }
            ++it;
        }
        return result;
    }
};
