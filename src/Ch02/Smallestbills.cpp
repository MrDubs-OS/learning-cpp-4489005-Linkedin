//Write a program that asks the user to enter a U.S. dollar amount and then shows how to pay that amount using the smallest number of $20, $10, $5, and $1 bills:

//Enter a dollar amount: 93 
//$20 bills: 4 $10 bills: 1 $5 bills: 0 $1 bills: 3

#include <stdio.h>

int main (void)
{

    int amount;
    printf("Enter a dollar value and i will output the smallest amount of bills needed");
    scanf("%d", &amount);

    int twenties = amount/20, tens = amount - twenties * 20, fives = amount - (twenties *20 + tens * 10), ones = amount - (twenties *20 + tens * 10 + fives * 5);
    printf("This is the best combination:\n\n20 Bills: %d\n10 Bills: %d\n5 Bills: %d\n1 Bills: %d", twenties, tens, fives, ones);

    return 0;
}