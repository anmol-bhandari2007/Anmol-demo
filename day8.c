#include<stdio.h>

void main(){
  int n,a,b;

  printf("Enter a number\n");
  scanf("%d",&n);

  while(n>0){
a = n%10;
b = (n/10)%10;
n = n/10;
if (a == b){
    printf("The repeated number is found\n");
    return 0;
}

  }
  printf("The repeated number is not found\n");
   
}