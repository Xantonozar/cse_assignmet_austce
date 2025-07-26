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
