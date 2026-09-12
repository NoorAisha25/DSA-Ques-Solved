class Solution {
public:
    int partition(vector<int>&arr , int l , int h){
        int pi = arr[l];
        int i = l;
        int j = h;

        while(i < j ){
            while(arr[i] <= pi && i <= h - 1) i++;
            while(arr[j] > pi && j > l) j--;
            if(i < j) swap(arr[i] , arr[j]);
        }
        swap(arr[j] , arr[l]);
        return j;
    }
    void qs(vector<int>& arr , int l , int h){

        if(l < h){
            int pi = partition(arr , l , h);
            qs(arr , l , pi - 1);
            qs(arr, pi + 1 , h);
        }
    }
    vector<int> sortArray(vector<int>& nums) {
       qs(nums , 0 , nums.size() - 1);
       return nums;
    }
    
};  
    
