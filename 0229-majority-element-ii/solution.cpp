class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0 , cnt2 = 0;
        int maj1 = NULL , maj2 = NULL;
        for(int i = 0 ; i< n ; i++){
            if(nums[i] == maj1){
                cnt1++;
            }
            else if(nums[i] == maj2){
                cnt2++;
            }
            else if(cnt1 == 0 ){
                maj1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0 ){
                maj2 = nums[i];
                cnt2 = 1;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }

        vector<int>res ;
        int f1 = 0;
        int f2 = 0;
        for(int &it : nums){
            if(it == maj1){
                f1++;
            }
            else if(it == maj2){
                f2++;
            }
        }

        if(f1 > floor(n/3)) res.push_back(maj1);
        if(f2 > floor(n/3)) res.push_back(maj2);

        return res;
    } 
};
