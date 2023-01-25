#include "stdio.h"
#include <iostream>

#define STB_IMAGE_IMPLEMENTATION
#include "image.h"

int main()
{
    int width,height,colorChannel;
    unsigned char* data = stbi_load("../src/im.png",&width,&height,&colorChannel,0);
    printf("%d\n",width);    
    printf("%d\n",height);
    printf("%d\n",colorChannel);
   
   for(int index = 0; index < height; index++)
   {
    for(int i = 0; i < width*4; i += 4)
    {
        if(data[index*width*4+i]*data[index*width*4+i+1]*data[index*width*4+i+2]*data[index*width*4+i+3] == 0)
        {
            printf(" ");
        }
        else{
            printf("@");
        }
    }
    printf("\n");
   }


    return 07;
}
