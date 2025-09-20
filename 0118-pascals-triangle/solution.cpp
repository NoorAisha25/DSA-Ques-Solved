class Solution {
public:
    vector<int> getRow(int rowIndex){
        vector<int> row(rowIndex+1 ,1);
        long long ans=1;
        for(int i=1; i<rowIndex ; i++){
            ans = ans* (rowIndex -i+1 );
            ans = ans/i;
            row[i]= ans;
        }
        return row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0 ; i<numRows ; i++){
            ans.push_back(getRow(i));
        }
        return ans;
    }
};
