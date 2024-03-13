class Solution {
public:
    long reverse(long n) {
        if(n<INT_MIN || n>INT_MAX){
            return 0;
        }
        long ans=0;
        while(n!=0){
            int d= n%10;
            if(ans>INT_MAX/10 || ans < INT_MIN/10){
                return 0;
            }
            ans = ans*10 + d;
            n/=10;
        }
        return ans;    
    }
};