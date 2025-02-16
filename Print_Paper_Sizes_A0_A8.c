/*calculate paper sizes A0 to A8*/

#include <stdio.h>
int main()
{    
    float lena0 = 1189, ba0 =841;

    printf("Dimensions of A0 paper %f %f \n", lena0, ba0);
    printf("Dimensions of A1 paper %f %f \n", ba0, lena0/2);
    printf("Dimensions of A2 paper %f %f \n", lena0/2, ba0/2);
    printf("Dimensions of A3 paper %f %f \n", ba0/2, lena0/4);
    printf("Dimensions of A4 paper %f %f \n", lena0/4, ba0/4);
    printf("Dimensions of A5 paper %f %f \n", ba0/4, lena0/8);
    printf("Dimensions of A6 paper %f %f \n", lena0/8, ba0/8);
    printf("Dimensions of A7 paper %f %f \n", ba0/8, lena0/16);
    printf("Dimensions of A8 paper %f %f \n", lena0/16, lena0/16);
    
}