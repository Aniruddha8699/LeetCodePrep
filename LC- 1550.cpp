
class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
        // If array length is less than 3, return false
        if (arr.size() < 3) {
            return false;
        }
        
        
        for (int i = 0; i <= arr.size() - 3; i++) {
            cout<< arr.size()-3<<endl;
           
            if (arr[i] % 2 == 1 && 
                arr[i + 1] % 2 == 1 && 
                arr[i + 2] % 2 == 1) {
                return true;
            }
        }
        
        return false;
    }
};
