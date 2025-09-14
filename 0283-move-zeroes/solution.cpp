class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n=nums.size();
        vector<int>temp;
        // int nz=0;
        // for(int i=0 ; i<n ; i++){
        //     if(nums[i] != 0){
        //     temp.push_back(nums[i]);
        //     nz++;
        //     }

        // }
        // for(int i=0 ; i<temp.size() ;i++){
        //     nums[i] = temp[i];
        // }
        // for(int i=nz ; i<n ; i++){
        //     nums[i]=0;
        // }
        int j=0;
        for(int i=0 ; i<n ;i++){
            if(nums[i] !=0){
                swap(nums[i] , nums[j]);
                j++;
            }
        }
       }
};
