class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(int i=0; i<image.size(); i++){
            int ptr1=0;
            int ptr2=image[i].size()-1;
            while(ptr1<=ptr2){
                if(image[i][ptr1]!=image[i][ptr2]) {
                    ptr1++;
                    ptr2--;
                }else{
                    if(ptr1 == ptr2){
                        image[i][ptr1]^=1;
                        break;
                    }
                    else{
                        image[i][ptr1]^=1;
                        image[i][ptr2]^=1;
                        ptr1++;
                        ptr2--;
                    }
                }
            }
        }return image;
    }
};