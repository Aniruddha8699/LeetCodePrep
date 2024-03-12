// 287. Find the Duplicate Number

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map <int,int> mp;
        int max = 0;
        int maxid = -1;
        for (int i=0; i<nums.size(); i++){
            mp[nums[i]] +=1;
        }
        for(int i=1; i<=mp.size(); i++){
            if (mp[i] > max) {
                max = mp[i];
                maxid = i;
            }
        }
        return maxid;
    }
};
