class Solution {
public:
    int reverseBits(int n) {
        int reversed=0;
        int x=32;
        while(x){
            reversed=reversed<<1;
            int new_bit=n&1;
            n=n>>1;
            reversed+= new_bit;
            x--;

        }return reversed;
    }
};