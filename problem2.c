/*
Write a program to input a number from the user and determine whether the given number is a prime number using a while loop.

Sample Input and Output:
Input:
Enter a number: 17
Output:
17 is a prime number.

Input:
Enter a number: 12
Output:
12 is not a prime number.
*/


#include <stdio.h>
int main() {
    int n,i=3, isPrime;
    printf("Enter a number: ");
    scanf("%d", &n);
    //number less then 2 is not a prime number
    if (n <= 1) isPrime = 0;
    //2 is a prime number
    else if (n == 2) isPrime = 1;
    //logic for even numbers
    else if (n % 2 == 0) isPrime = 0;
    //logic for odd number
    else {
        //checking if odd number is primeor not
        //i*i is used to avoid making prime number into not prime number
        while ( i*i<= n) {// 
            if (n % i == 0) {
                isPrime = 0;
            }        i=i+2;
        }      }
    //printing value 
    if (isPrime) printf("%d is a prime number.\n", n);
    else printf("%d is not a prime number.\n", n);
    return 0;
}
