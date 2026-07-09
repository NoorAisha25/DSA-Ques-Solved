class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();

        int Index = -1;
        
        for(int i= n-1 ; i>0 ; i--){
            if(nums[i] > nums[i-1]){
                 Index = i-1;
                 break;
            }
        }
        if(Index != -1){
            int Swap_Index = Index;
        for(int j= n-1 ; j>=Index+1 ; j--){
                if(nums[j] > nums[Index]){
                    Swap_Index = j;
                    break;
                }
            }
            swap(nums[Swap_Index] , nums[Index]);
            
        }    
        reverse(nums.begin()+Index+1 , nums.end());
    }
};
