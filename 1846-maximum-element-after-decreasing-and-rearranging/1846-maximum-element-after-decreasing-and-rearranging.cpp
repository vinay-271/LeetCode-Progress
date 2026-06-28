class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        if(arr[0] != 1) arr[0] = 1;
        int i=1;
        for( ; i<arr.size() ; i++){
            if(std::abs(arr[i] - arr[i-1]) > 1){
                arr[i] = arr[i-1] + 1;
            }
        }
        return arr[i-1];
    }
};