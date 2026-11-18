// 4.WAP to print grade of given gpa.

#include<stdio.h>

void main(){
    float gpa;

    printf("Enter a gpa:\n");
    scanf("%f",&gpa);

    if(gpa > 4 || gpa < 0){
        printf("Invalid gpa.");
    }
    
    else if(gpa <= 4 && gpa > 3.6f){
        printf("%.2f is A+ grade",gpa);
    }
    else if(gpa <= 3.6f && gpa > 3.2f){
     printf("%.2f is A grade",gpa);
    }
    else if(gpa <= 3.2f && gpa > 2.8f){
     printf("%.2f is B+ grade",gpa);
    }
    else if(gpa <= 2.8f && gpa > 2.4f){
     printf("%.2f is B grade",gpa);
    }
    else if(gpa <= 2.4f && gpa > 2){
     printf("%.2f is C+ grade",gpa);
    }
    else if(gpa <= 2 && gpa > 1.6f){
     printf("%.2f is C grade",gpa);
    }
    else {
        printf("%.2f is Non grade",gpa);
    }
    
}