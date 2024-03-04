// 53. Maximum Subarray

// My initial solution with O(n^2) time complexity
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxi=INT_MIN;
        int tempSum=INT_MIN;
        if(nums.size()==1) return nums[0];
        for(int i=0; i<nums.size(); i++){
            tempSum=0;
            for(int j=i; j<nums.size(); j++){
                tempSum+=nums[j];
                maxi=max(tempSum,maxi);
            }
        }
        return maxi;
    }    
};

// Kadane's Algorithm- Ideal solution with O(n) time complexity
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    int maxEndingHere = nums[0];
    int maxSoFar = nums[0];

    for (int i = 1; i < nums.size(); ++i) {
        maxEndingHere = max(nums[i], maxEndingHere + nums[i]);
        maxSoFar = max(maxSoFar, maxEndingHere);
    }

    return maxSoFar;
    }    
};

