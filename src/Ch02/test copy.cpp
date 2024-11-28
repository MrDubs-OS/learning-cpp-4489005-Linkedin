//Program thats asks for a value in x and then prints an answer to a polynomial 

#include <stdio.h>

int main (void)
{
    float x;
   
    printf("Enter a value of x in:\n3X^5 + 2x^4 - 5X^3 - X^2 + 7X -6\n");
    scanf("%f", &x);
    float a = 3*(x*x*x*x*x),b = 2*(x*x*x*x),c = 5*(x*x*x),d 
     =x*x, e=7*x;
    float answer = a+b-c-d+e-6;
    //float answer = ((((3*x+2)*x-5)*x-1)*x+7)*x-6;
    printf("The answer to this polynomial is %.2f\n\n", answer);
    return 0;
}