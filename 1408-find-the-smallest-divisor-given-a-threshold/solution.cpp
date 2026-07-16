class Solution {
public:

    int func(vector<int>& nums , int mid ){
         int Sum = 0;

         for(int i=0 ; i<nums.size() ; i++){
               Sum += ceil( (double)nums[i] / (double)mid);
         }
          return Sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l = 1 ; 
        int h = *max_element(nums.begin() , nums.end());
        int result = 1;
        while(l <= h){
         
         int mid = l + (h-l)/2;
         
         int Sum = func( nums , mid );

         if(Sum <= threshold) 
         {  
            result = mid;
            h = mid - 1;
         }   
         else l = mid + 1;
        }
        return result;
    }
};
