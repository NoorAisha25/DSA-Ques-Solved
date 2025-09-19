class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //Better approach with TC : O (n^2)
    //     int count=0;
    //     for(int i=0 ; i<nums.size() ; i++){
    //         int sum=0;
            
    //         for(int j=i ; j<nums.size(); j++){
    //             sum+=nums[j];
    //             if(sum==k) count++;
    //         }
            
    //     }return count;
    // return -1;
    int n= nums.size();
    unordered_map<int,int> mpp;
    mpp[0] = 1;
    int presum= 0 ; int cnt=0;
    for(int i= 0 ; i<n ; i++){
        presum += nums[i];
        int remove = presum - k;
        cnt += mpp[remove];
        mpp [presum] +=1;
    }
    return cnt;
    }
};
