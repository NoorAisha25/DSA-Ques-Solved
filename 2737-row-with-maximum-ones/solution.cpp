class Solution {
public:
    int lowerB(vector<int>&arr , int m , int x){
        int l = 0;
        int h = m - 1;
        int ans = m;

        while(l <= h){
            int mid = l + (h - l)/2;

            if(arr[mid] >= x){
                ans = mid;
                h = mid - 1;
            }
            else l = mid + 1;
        }
        return ans;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        
        int max_row = 0;
        int idx = 0;
        for(int i = 0 ; i < n ; i++){
             
             vector<int>row = mat[i];
             sort(row.begin() , row.end());

             int cnt_ones = m - lowerB(row , m , 1);

             if(cnt_ones > max_row){
                max_row = cnt_ones ;
                idx = i;
             }
        }

        return {idx , max_row};
    }
};
