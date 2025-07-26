/*
In this problem you will be given a sequence of single digit numbers as input. The input will contain both positive and negative numbers and the sequence will stop when 'q' is pressed. You have to find the length, sum and starting position of the longest positive sequence. A positive sequence means a sequence of consecutive positive numbers. You cannot use arrays for this problem.
Sample Input: 1 2 4 -3 -2 1 9 -3 -2 -9 4 5 2 9 -1 -4 q
Sample Output: Length of LPS: 4 Sum of LPS: 20 Starting position of LPS: 10 (Assuming that position starts from 0)
*/


#include <stdio.h>
int main () {
    int num,pos=-1,maxStreak=0,streak=0,sum=0,maxSum=0,neg=0,streakPos=0,temPos=0;
    char inp;
    printf("Enter single digit number : ");
    while (inp!='q') {
        //Taking character because i need q to quit the loop
        scanf(" %c",&inp);
        //As char will take only one character so negative digits will will divided into two character - and digit so the extra - might corrupt the code . That's why making sure that doesn't affect my logic.
        if (inp=='-' || inp == 'q') {
            neg=1;
        }else{
            pos+=1;
            neg-=1;
            num=inp - '0';
        }
        if ( num > 0 &&  neg < 0 ) {
            if (streak==0 ) {
                temPos=pos;
            }
            streak++;
            maxStreak = maxStreak > streak ? maxStreak : streak;
            sum+=num;
            if ( streak >= maxStreak ) {
                maxSum=sum;
                streakPos=temPos;
            }
        }else {
            streak=0;
            sum=0;
        }

    }
    printf("The length of LPS: %d . Sum of LPS: %d . Starting position of LPS: %d (Assuming the position start from 0)",maxStreak,maxSum,streakPos);
    return 0;
}
