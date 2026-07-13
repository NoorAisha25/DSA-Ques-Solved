class Solution {
public:
    
    int search(vector<int>& nums , int target){
         int n = nums.size();
         
         int l = 0;
         int h = n-1;

         while( l<= h ){

            int mid = (l + h) / 2;

            if(nums[mid] == target) return mid;

            else if(nums[mid] > target) h = mid - 1;

            else l = mid + 1;
         }
         return -1;
/*------This is linear search approach where tc-O(n) ------*/
        // int n = nums.size();

        // for(int i=0 ; i<n ; i++){
        //     if(nums[i] == target) return i;
            
        // }
        // return -1;
    }
};
