class Solution {
public:
    
  
    int func(vector<int>& arr, int k , int mid){
        
        int painter = 1;
        int currSum = 0;
        for(int i=0 ; i<arr.size() ; i++){
            
            currSum += arr[i];
            if(currSum > mid ) {
                painter++;
                currSum = arr[i];
            }
        }
        return painter;
    }
    
    int minTime(vector<int>& arr, int k) {
        // code here
        int l = *max_element(arr.begin() , arr.end());
        int h = accumulate(arr.begin() , arr.end(),0);
        int ans = -1;
        
        while( l<= h){
            int mid  = l + (h-l)/2;
            int PossibleAns = func(arr, k ,mid);
            if(PossibleAns <= k){
                ans = mid;
                h = mid - 1;
            }
            else{
                l = mid + 1;
            }
        }
        return ans ;
    }

    int splitArray(vector<int>& nums, int k) {
        return minTime(nums,k);
    }
};
