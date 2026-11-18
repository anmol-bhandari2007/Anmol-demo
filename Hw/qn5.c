// 5.Find the largest number among input 5 numbers.

#include<stdio.h>

void main(){
    int a,b,c,d,e,l;

    printf("Enter five numbers:\n");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

 if(a>b && a>c && a>d && a>e){
    printf("%d is largest number among five numbers",a);
 }
 else if(b>a && b>c && b>d && b>e){
    printf("%d is largest number among five numbers",b);
 }
 else if(c>a && c>b && c>d && c>e){
    printf("%d is largest number among five numbers",c);
 }
 else if(d>a && d>b && d>c && d>e){
    printf("%d is largest number among five numbers",d);
 }
 else {
    printf("%d is largest number among five numbers",e);
 }
 

    
}