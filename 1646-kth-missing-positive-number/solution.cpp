class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // int num = 1;
        // int i=0;
        // int n = arr.size();

        // while(i<n && k>0){
        //     if(arr[i] == num){
        //           i++;
        //     }
        //     else{
        //         k--;
        //     }
        //     num++;
        // }  
        // while(k--)    {
        //     num++;
        // }
        // return num-1;
        int n = arr.size();
        int l = 0;
        int h = n - 1;

        while(l <= h){
            int m = l + (h - l)/2;
            int mis = arr[m] - (m + 1);
            if(mis < k ) l = m  + 1;
            else h = m - 1;
        }
        return (l + k);
    }
};
