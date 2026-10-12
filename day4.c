// WAP to calculate simple interest using the formula SI = (P * T * R) / 100
#include <stdio.h>
void main(){

//  printf("%d",10==10|| 10>20 || 10<20);   
float p, t, r,si=0;
printf("Enter the principle amount:\n");
scanf("%f",&p);

printf("Enter the time in years:\n");
scanf("%f",&t);

printf("Enter the rate of interest:\n");
scanf("%f",&r);

si=(p*t*r)/100;

printf("The simple interest is:%.3f\n",si);

}