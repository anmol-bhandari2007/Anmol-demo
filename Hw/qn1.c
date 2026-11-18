// 1.WAP to check whether a input number is positive or negative.

#include <stdio.h>
void main(){
    
    int num;
    printf("Enter a number:\n");
    scanf("%d",&num);
    
    if(num == 0) {
        printf("%d is a zero",num);
    }
    else if(num>0){
        printf("%d is a positive number",num);
    }
    else{
        printf("%d is a negative number",num);
    }
}