class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0;
        int cnt2 = 0;
        int majele1 = NULL;
        int majele2 = NULL;

        for(int i = 0 ; i <n ; i++){
            if(majele1 == nums[i]){
                cnt1++;
            }
            else if(majele2 == nums[i]){
                cnt2++;
            }
            else if(cnt1 == 0){
                majele1 = nums[i];
                cnt1++;
            }
            else if(cnt2 == 0){
                majele2 = nums[i];
                cnt2++;
            }
            else{
                cnt1--;
                cnt2--;
            }
        }

        int f1 = 0;
        int f2 = 0;

        for(int &num : nums){
            if(num == majele1){
                f1++;
            }
            else if(num == majele2){
                f2++;
            }
        }

        vector<int>res;

        if(f1 > n/3) res.push_back(majele1);
        if(f2 > n/3) res.push_back(majele2);

        return res;
    } 
};
