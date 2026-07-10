class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        // int cnt=0;
         
        // for(int i=0 ; i<n ; i++){
        //     int sum = 0;
        //     for(int j= i ; j<n ; j++){
        //         sum += nums[j];

        //         if(sum == k) cnt++;
        //     }
        // }
        // return cnt;

        unordered_map<int,int> mpp;
        
        int result = 0;
        int cumSum = 0;
        mpp.insert({0,1});

        for(int i=0 ; i<n ; i++){
            cumSum += nums[i];
            //when found cumSum-k in the map so increase result be 1
            if(mpp.find(cumSum-k) != mpp.end()){
                result += mpp[cumSum-k];
            }
            mpp[cumSum]++;
        }
        return result;

    }
};


