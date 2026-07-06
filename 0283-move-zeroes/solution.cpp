class Solution {
public:
    void moveZeroes(vector<int>& nums) {
          int n = nums.size();
        //   vector<int>temp;
        //   int nz=0;
        //   //step one
        //   for(int i=0 ; i<n ; i++){
        //     if(nums[i] != 0){
        //         temp.push_back(nums[i]);
        //         nz++;
        //     }
        //   }
        //   //step-2
        //   for(int i=0 ; i<temp.size() ; i++){
        //     nums[i] = temp[i];
        //   }
        //   //step-3
        //   for(int i=nz ; i<n ; i++){
        //     nums[i] = 0;
        //   }

        int i=-1 ;
        for(int j=0 ; j<n ; j++){
            if(nums[j] != 0){
                swap(nums[i+1] , nums[j]);
                i++;
            }
        }

    }
};
