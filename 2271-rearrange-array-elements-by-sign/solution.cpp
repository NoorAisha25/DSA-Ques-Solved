class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
       int m = nums.size();
       vector<int> result(m);
       int p = 0 , n = 1;
       for(int i = 0 ; i< m ; i++){
         if(nums[i] < 0){
            result[n] = nums[i];
            n += 2;
         }
         else{
            result[p] = nums[i];
            p += 2;
         }
       }
       return result;
    }
};
