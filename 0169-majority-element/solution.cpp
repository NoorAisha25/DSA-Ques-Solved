class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        /* --- Brute force ---*/
        // for(int i=0 ; i<n ; i++){
        //     int cnt=0;
        //     for(int j=i ; j<n ; j++){
        //         if(nums[i]==nums[j]) cnt++;
        //     }
        //     if(cnt>(n/2)) return nums[i];
        // }
        // return -1;

        /*----hashmap-----*/
    //     map<int,int>mp;
    //     for(int i=0 ; i<n ; i++){
    //         mp[nums[i]]++;
    //     }
    //     for(auto it: mp){
    //         if(it.second>n/2) return it.first;
    //     }

    //    return -1;
        /*--moore's voting algorithm --*/
        int count=0;
        int majEle = nums[0];
        for(int i=0 ; i<n ; i++){
            if(count==0){
                majEle= nums[i];
                count=1;
            }
            else if(nums[i]==majEle){
                count++;
            }
            else count--;
        }
        return majEle;
       
     } 
};
