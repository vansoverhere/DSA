class Solution {
public:
    string reversePrefix(string s, int k) {
        int ptr1=0;
        int ptr2=k-1;
        while(ptr1 < ptr2){
            swap(s[ptr1],s[ptr2]);
            ptr1++;
            ptr2--;

        }return s;
    }
};