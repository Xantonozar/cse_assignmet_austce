#include <stdio.h>
int main(){
    int count=0,i,k,j,letNum;
    char letter;
    printf("Enter number of character : ");
    scanf("%d",&letNum);
    for( i=1;i<=letNum;i++){
    letter='a';
    k=0;
        for( j=0;j<letNum-i;j++){
            printf(" ");
            k++;
        }
        while(k>=letNum-i && k<letNum){
            printf("%c ",letter);
            letter+=1;
            k++;
        }
        printf("\n");
    }
}