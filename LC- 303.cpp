class NumArray {
public:
    vector<int> sumarr;
    NumArray(vector<int>& nums) {
        int n = nums.size();
        this->sumarr.push_back(nums[0]);
        for(int i=1; i<n; i++) {
            this->sumarr.push_back(sumarr[i-1]+nums[i]);
        }
    }
    
    int sumRange(int left, int right) {
        if (left ==0)  return this->sumarr[right];
        return this->sumarr[right] - this->sumarr[left-1];
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */
