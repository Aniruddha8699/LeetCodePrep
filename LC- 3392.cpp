class Solution {
public:
    int countSubarrays(vector<int>& nums) {
        int count=0,left = 0;
        int n = nums.size();
        for(int r = 2; r<n;r++){
            if((nums[r-2]+nums[r]) == 0.5*nums[r-1])  count++;
        }
        return count;
    }
};
