class Solution {
public:
    int missingNumber(vector<int>& nums) {
        /*Better approach by hashing 
        int n=nums.size();
        vector<int>hash(n+1,0);
        for(int i=0;i<n;i++){
            hash[nums[i]]=1;
        }
        for(int i=0;i<=n; i++){
            if(hash[i]==0){
                return i;
            }
        } return -1;
    }
    */
    int n=nums.size();
    int sum=(n*(n+1))/2;
    int s2=0;
    for(int i=0 ; i<n ; i++){
             s2+= nums[i];
    }
    return (sum-s2);
    }
};
