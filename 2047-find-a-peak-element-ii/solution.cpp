class Solution {
public:

   int func(vector<vector<int>>& mat , int n , int mid){
    int maxVal = -1;
    int idx = -1;
    for(int i = 0 ; i<n ; i++){
        if(mat[i][mid] > maxVal){
            maxVal = mat[i][mid];
            idx = i;
        }
    }
    return idx;
   }
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        int l = 0 , h = m-1;
        while( l<= h){
             int mid = l + (h-l)/2;

             int maxRow = func(mat , n , mid);

             int left = (mid-1 >=0) ? mat[maxRow][mid-1] :-1 ;
             int right = (mid+1 < m) ? mat[maxRow][mid+1] : -1 ;

             if(mat[maxRow][mid] > left && mat[maxRow][mid] > right){
                return {maxRow , mid};
             }
             else if(mat[maxRow][mid] < left) h = mid - 1;
             else l = mid + 1;
        }
        return {-1,-1};
    }
};
