class Solution {
public:
    int findComplement(int num) {
        unsigned mask = 1;

        while(mask <= (unsigned)num){
            mask <<= 1;
        }

        return num ^ (mask - 1);
    }
};