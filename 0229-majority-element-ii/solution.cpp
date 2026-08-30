class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        int cnt1 = 0;
        int cnt2 = 0;
        int majEle1 = NULL;
        int majEle2 = NULL;
        
        for(int i = 0 ; i < n ; i++){
            if(majEle1 == nums[i]){
                cnt1++;
            }
            else if(majEle2 == nums[i]){
                cnt2++;
            }
            else if(cnt1 == 0){
                majEle1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0){
                majEle2 = nums[i];
                cnt2 = 1;
            }
            else {
                cnt1--;
                cnt2--;
            }
        }

        int f1 = 0;
        int f2 = 0;
        for(int &num : nums){
            if(num == majEle1){
                f1++;
            }
            else if(num == majEle2){
                f2++;
            }
        }
        vector<int>arr;
        if(f1 > n/3) arr.push_back(majEle1);
        if(f2 > n/3) arr.push_back(majEle2);

        return arr;
    } 
};
