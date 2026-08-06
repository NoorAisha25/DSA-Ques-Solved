class Solution {
public:
    void moveZeroes(vector<int>& arr) {
          int n = arr.size();
        //   vector<int>temp;

        //   int nz= 0;
        //   for(int i = 0 ; i<n ; i++){
        //      if(arr[i] !=0 ){
        //         temp.push_back(arr[i]);
        //         nz++;
        //      }
        //   }
        //   for(int i = 0 ; i<temp.size() ; i++){
        //     arr[i] = temp[i];
        //   }
        //   for(int i = nz ; i < n ; i++){
        //      arr[i] = 0;
        //   }

        int i = -1;
        for(int j = 0 ; j < n ; j++){
            if(arr[j] != 0){
                swap(arr[i+1] , arr[j]);
                i++;
            }
        }
    }
};
