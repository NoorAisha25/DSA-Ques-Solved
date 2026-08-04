class Solution {
public:
    int func(vector<int>&arr , int mid , int k){
        int boq = 0;
        int cons = 0;

        for(int i = 0 ; i<arr.size() ; i++){

            if(arr[i] <= mid){
                cons++;
            }
            else{ cons = 0;}
            if(cons == k){
                boq++;
                cons = 0;
            }
        }
        return boq;
    }
    
    int minDays(vector<int>& arr, int m, int k) {
        int l = 1;
        int h = *max_element(arr.begin() , arr.end());
        int minNum = -1;

        while( l <= h){
            int mid = l + ( h - l)/2;

            int posAns = func(arr , mid , k);

            if(posAns >= m){
                minNum = mid;
                h = mid - 1;
            }
            else l = mid + 1;
        }
        return minNum;
    }
};
