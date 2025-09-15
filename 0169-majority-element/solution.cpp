class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        /*for(int i=0; i<n ; i++){
            int cnt=0;
            for(int j=0; j<n; j++){
                if(nums[i]==nums[j]){
                    cnt++;
                }
            } if(cnt>n/2){ return nums[i];}
        }*/
    //     
    
    map<int,int> mpp;
    for(int i=0 ; i<n ; i++){
        mpp[nums[i]]++;
    }
    for(auto it : mpp){
        if(it.second > n/2){
            return it.first;
        }
    }
    
     return -1;
     
     } 
};
