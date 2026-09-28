class Solution {
public:
    double myPow(double x, int n) {
        if(n == 0 || x == 1) return 1.0;
        else if(n == 1) return x;

        if(x == -1) return (n%2 == 0)? 1 : -1;

        long exp = n;

        if(exp < 0){
            exp = -exp;
        }

        double res = 1;

        while(exp){
            if(exp & 1){
                res *= x;
            }
            x *= x;
            exp /= 2;            
        }

        return (n<0) ? 1/res : res;
    }
};