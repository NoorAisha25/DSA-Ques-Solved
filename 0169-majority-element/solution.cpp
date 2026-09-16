class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majele = NULL;
        int cnt = 0;

        for(int i =0 ; i < n ; i++){

            if(nums[i] == majele){
                cnt++;
            }

            else if(cnt == 0){
                majele = nums[i];
                cnt = 1;
            }
            else cnt--;
        }

        return majele;
     } 
};
