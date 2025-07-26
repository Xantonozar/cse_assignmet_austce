#include <stdio.h>
int main(){
    int n,sign=-1;
    double x,block,sum,expo=1.00;
    printf("Enter value of X : ");
    scanf("%lf",&x);
    printf("Enter value of N : ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    sign*=-1;
    expo*=x;
    block=expo/i;
    sum+=(sign*block);
   
    }
    printf("The sum is %lf \n",sum);
    return 0;
}