class Solution {
public:
 
    const int MOD = 1000000007;
    long long int power(long long a,long long int b)
    {
        if (b == 0) return 1;
    if (b == 1) return a % MOD; 

    long long int half = power(a, b / 2); 
    half = (half * half) % MOD;

    if (b % 2 == 0) 
        return half; 
    else 
        return (half * (a % MOD)) % MOD;
    }
    int countGoodNumbers(long long n) {
        
        // n = 4 
        // 5 4 5 4 
        int ans = 1;
        if(n == 1) return 5;
        if(n == 2) return 20;
        if(n == 3) return 100;
        if(n&1) 
        {
            // odd no. eg n=5
            // 5^3 * 4^2
            // pass odd bas n/2
            // and even as n/2-1
             ans = ( (power(4,n/2)%MOD) * (power(5,n/2+1)%MOD)%MOD); 
        }
        else
        {
            // even n 
            // so n/2 odd and even respectively 
             ans = ( (power(4,n/2)%MOD) * (power(5,n/2)%MOD)%MOD); 
        }
        return ans;
    }
};