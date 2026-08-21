class Solution {
public:
    int divide(int dividend, int divisor) {
        bool sign=true;
        if(dividend == INT_MIN && divisor == -1)
    return INT_MAX;

        if(dividend<0 && divisor>0) sign=false;
        else if(dividend>0 && divisor<0) sign=false;

        long n=dividend;
        long d=divisor;
        n=labs(dividend);
        d=labs(divisor);
        long cnt=0;

        while(n>=d){
            int pwr=0;
            while(n >= (d<<(pwr+1))){
                pwr++;
            }
            n-=d<<pwr;
            cnt+=1<<pwr;
        }
        if(cnt>INT_MAX && sign==true){
            return INT_MAX;
        }else if(cnt>INT_MAX && sign==false){
            return INT_MIN;
        }
        return sign? cnt : -1*cnt;
    }
};