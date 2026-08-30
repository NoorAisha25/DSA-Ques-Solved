class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        int majEle = INT_MIN;
        int cnt = 0;
        for(int i = 0 ; i < n ; i++){
            if(cnt == 0){
                majEle = nums[i];
                cnt = 1;
            }
            else if(nums[i] == majEle){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return majEle;
     } 
};
