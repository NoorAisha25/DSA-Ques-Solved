class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size(); 
        sort(nums.begin() , nums.end());
        int closest = nums[0]  +nums[1] + nums[2];

        for(int i = 0 ; i < n ; i++){
            int l = i + 1;
            int h = n - 1;
            while ( l < h){
                int sum = nums[i] + nums[l] + nums[h];
                if(abs(sum - target) < abs(closest - target)){
                    closest = sum;
                }

                if(sum > target) h--;
                else if(sum < target) l++;
                else return sum;
            }
        }
        return closest;
    }
};
