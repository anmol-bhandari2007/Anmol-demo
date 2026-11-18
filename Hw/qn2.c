// 2.WAP to check whether the number is divisible by 5 or not.

#include<stdio.h>

void main(){
int num;

printf("Enter a number:\n");
scanf("%d",&num);
 
if(num % 5 == 0){
    printf("%d is divisible by 5",num);
}
else{
    printf("%d is not divisible by 5",num);
}

}