// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        if(n == 1) return isBadVersion(n);
        int lo = 1 , hi = n;
        int firstBad = -1;
        while(lo <= hi){
            int mid = lo + (hi-lo)/2;

            if(isBadVersion(mid)){
                firstBad = mid;
                hi = mid-1;
            }
            else{
                lo = mid+1;
            }
        }
        return firstBad;
    }
};