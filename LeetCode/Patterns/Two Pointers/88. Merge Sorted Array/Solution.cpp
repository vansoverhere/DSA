class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int ptr1=m-1;
        int ptr2=n-1;
        int ptr3=m+n-1;

        while(ptr2>=0){
            if(ptr1 >= 0 && nums1[ptr1] > nums2[ptr2]){
                nums1[ptr3]=nums1[ptr1];
                ptr1--;
                ptr3--;
            }else{
                nums1[ptr3]=nums2[ptr2];
                ptr2--;
                ptr3--;
            }
        }
    }
};