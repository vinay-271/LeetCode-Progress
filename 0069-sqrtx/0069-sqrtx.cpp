class Solution {
public:
    int mySqrt(int x) {
        if(x == 0 || x == 1) return x;
        
        int lo = 1 , hi = x/2;
        int ans = 0;
        while(lo <= hi){
            long long mid = lo + (hi - lo)/2;
            if(mid*mid <= x){
                ans = mid;
                lo = mid+1;
            }
            else{
                hi = mid-1;
            }
        }
        return ans;
    }
};