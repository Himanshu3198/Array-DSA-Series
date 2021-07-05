// 832. Flipping an Image

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
     
               int cols=image.size();
        int rows=image[0].size();
        
    for(int i=0;i<cols;i++)
    {
        int f=0,l=rows-1;
        while(f<l)
        {
		
		//flipping the image
            int temp=image[i][f];
            image[i][f]=image[i][l];
            image[i][l]=temp;
			
			//inverting the image
            image[i][f]=!image[i][f];
            image[i][l]=!image[i][l];
			
			//updating f and l
            f++;
            l--;
        }
		//if one bit left out in middle that was not inverted
        if(f==l)
            image[i][f]=!image[i][f];
    }    
        return image;
    }
};
