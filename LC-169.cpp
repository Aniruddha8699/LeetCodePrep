// 169. Majority Element

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map <int,int> mp;
        for (int i=0; i<nums.size(); i++){
            mp[nums[i]] +=1;
        }
        map<int, int>::iterator it = mp.begin();
        int max = INT_MIN;
        int max_ = 0;
        while (it != mp.end()) {
            if (max < it->second) {
                max = it->second;
                max_ = it->first;
            }
            ++it;
        }   
    return max_;     
    }
};

// another solution
/*
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
};
*/
