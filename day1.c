//Lab1: Structure of C Program

/* Author : Jagrit Gaire
Date: 2026-01-10
Description: Structure Definition.*/

#include<stdio.h> // link section
#define PI 3.14; // define section 
 int sum; 
int a=10; // global decleration section
int b=20; // global decleration section

void main(){  //main function section
    
  printf("Hello World");
  sum(); //function calling section
}
int sum(){  //sub function section
    return a+b;

}
