/*
 Write a program that calculates the sum of a series involving reciprocal powers with alternating signs. The series is defined as
1 - 1/x + 1/x^2 - 1/x^3 + 1/x^4 - 1/x^5 + ..... + 1/x^(n-1)
In this series, the first term is always 1, and each subsequent term is obtained by dividing 1 by an increasing power of x. The sign of the terms alternates between positive and negative. The values of x (a positive real number) and n (the number of terms) should be taken as input from the user. Your program should then use a while loop to compute the sum of the first n terms of this series and display the final result.
For example, if the user enters x=2 and n=4, the program should evaluate the series as
1-1/2  + 1/4 - 1/8 
which results in 0.625.
You are required to ensure that the program works for any valid input of x and n, and it should display the final sum in a readable format.
*/


#include <stdio.h>
int main(){
int expoVal=1,n,x,sign=-1,i=0;
double deno,sum=0;
    printf("enter n \n");
    scanf("%d",&n);
    printf("enter x \n");
    scanf("%d",&x);
    while(i<n){
       //assigning value of sign.
       //this logic will provide negative sign in n==even case and positive sign in n==odd case
        sign=sign*(-1);
       //we want 1 in the starting of the sequence and expoVal is 1 bby default in the starting
       //so we are not changing expoVal in n==1 case
        if(i!=0){expoVal*=x;}
       //this will save the value of the number 1/x^(n-1) so that we can sum easily
        deno=1/(double)expoVal;
       //sum of the sequence with appropriate sign
        sum+=(sign*deno);
        i++;
        }
        printf("The sum is %.3lf",sum);
return 0;
}
