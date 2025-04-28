class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int m, l=0, r=n-1;
        if (n==1)   return nums[0];
        if (nums[0]!=nums[1])   return nums[0];
        if (nums[n-2]!= nums[n-1])  return nums[n-1];
        while(r>l){
            m = l + ((r-l)/2);
            if (m%2 == 1)   m-=1;
            if ((nums[m-1] != nums[m]) && (nums[m] != nums[m+1])) return nums[m];
            if(nums[m-1] != nums[m])    l = m;
            else    r = m;
        }
        return 0;
    }
};
