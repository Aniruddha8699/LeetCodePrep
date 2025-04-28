// Method1
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int l,r,n = image.size();
        int temp;
        for(int i=0; i<n; i++ ){
            l=0;
            r=n-1;
            while(r>=l){
                temp=(image[i][l]==0?1:0);
                image[i][l]=(image[i][r]==0?1:0);
                image[i][r]=temp;
                l++;
                r--;
            }
        }
        return image;
    }
};

// Method2
class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n = image.size();
        int temp;
        for(int i=0; i<n; i++ ){
            for(int j=0;j<(n+1)/2; j++){
                temp=image[i][j]^1;
                image[i][j]=image[i][n-j-1]^1;
                image[i][n-j-1]=temp;
            }
        }
        return image;
    }
};
