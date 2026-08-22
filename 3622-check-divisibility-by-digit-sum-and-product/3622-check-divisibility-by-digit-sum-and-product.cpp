class Solution {
public:
    bool checkDivisibility(int n) {
        int sum = 0;
        int prod = 1;
        int num = n;
        while(num){
            sum += (num%10);
            prod *= (num%10);
            num /= 10;
        }
        if((n % (sum+prod)) == 0) return true;
        else return false;
    }
};