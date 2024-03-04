// 73. Set Matrix Zeroes

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int> >& matrix) {
        vector<int> x,y;
        int m = matrix[0].size();
        int n = matrix.size();

        for (int i = 0; i < n; i++) {
            for (int j =0; j < m; j++) {
                if (matrix[i][j] == 0){
                    x.push_back(i);
                    y.push_back(j);
                }
            }
        }
        for(int i = 0; i < x.size(); i++){
            for(int j = 0; j < m; j++){
                matrix[x[i]][j] = 0;
            }
        }
        for(int i = 0; i < y.size(); i++){
            for(int j = 0; j <n; j++) {
                matrix[j][y[i]] = 0;
            }
        }
    }
};

int main() {
    vector<vector<int> >out;
    vector<int> inner;
	inner.push_back(1);
	inner.push_back(1);
	inner.push_back(1);
	out.push_back(inner);
	inner.clear();
	
	inner.push_back(1);
	inner.push_back(0);
	inner.push_back(1);
	out.push_back(inner);
	inner.clear();
	
	inner.push_back(1);
	inner.push_back(1);
	inner.push_back(1);
	out.push_back(inner);
	inner.clear();
	cout<<"initial"<<endl;
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			cout<<out[i][j]<<" ";
		}
		cout<<endl;
	}
	Solution s;
	s.setZeroes(out);
	cout<<"final"<<endl;
	for(int i=0; i<3;i++){
		for(int j=0;j<3;j++){
			cout<<out[i][j]<<" ";
		}
		cout<<endl;
	}
    return 0;
}
