#include<stdio.h>

void main(){

    int i,j;

    for(j=1; j<=100; j++){
      int c=0;
        for(i=1; i<=j; i++){
        if(j%i==0){
            c=c+1;
        }
    }
        if(c==2){
        printf("%d\t",j);
        }
}
}