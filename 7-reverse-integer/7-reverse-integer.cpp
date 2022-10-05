class Solution {
public:
    int reverse(int x) {
    long double max = pow(2,31);
    long double min = -max;
    long int rem = 0;
    long int rev = 0;

    if(x > max || x < min) {
        return rev;
    } 
    else {
        while(x != 0) {
            rem = x % 10;
            x = x / 10;
            if(rev == 0 && rem == 0) {
                continue;
            }
            rev = rev * 10 + rem;
        }
        if(rev > max -1 || rev < min) {
          return 0;
        }
        return rev;
    }
 }
};