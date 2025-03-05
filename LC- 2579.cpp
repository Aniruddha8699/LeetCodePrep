class Solution {
public:
    long long coloredCells(int n1) {
        long long int n = n1;
        return 2*n*(n-1)+1;
    }
};
