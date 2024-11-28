/* Computes the dimensional weight of a

box from input provided by the user */

#include <stdio.h>

int main(void)

{
    int height = 10, length = 10, width = 10, volume, weight;
    
    volume = height * length * width;

    printf("Volume (cubic inches): %d\n", volume); 
    printf("Dimensional weight (pounds):%d\n\n", (volume + 165)/166);
    return 0;

}