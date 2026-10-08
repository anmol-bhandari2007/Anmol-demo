#include<stdio.h>
void main(){
    int a,b,sum=0,sub=0,mul=0,r=0;
    float div=0;
    printf("Enter any two numbers:\n");
    scanf("%d%d",&a,&b);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    r=(a%2);
    printf("The sum is:%d\n",sum);
    printf("The multiple is:%d\n",mul);
    printf("The division is:%.3f\n",div);
    printf("The subtraction is:%d\n",sub);
    printf("The remainder is:%d\n",r);
}