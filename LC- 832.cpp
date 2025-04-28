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
