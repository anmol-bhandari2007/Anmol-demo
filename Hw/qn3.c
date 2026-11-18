// 3.WAP to check whether the given year is leap year or not.

#include<stdio.h>

void main(){
    int yr;

    printf("Enter a year:\n");
    scanf("%d",&yr);

    if(yr%4 == 0){
        printf("The given year is leap year.",yr);
    }
    else{
        printf("The given year is not leap year.",yr);
    }
}
