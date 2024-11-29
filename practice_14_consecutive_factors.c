#include<stdio.h>
int main(){

    int num,i,counter,a,b;

    printf("Enter a number\t:\t");
    scanf("%d",&num);

    counter=0;

    if(num<0){
        printf("Please enter positive integer numbers");
    }

    else{

        for(i=2;i<num;i=i+1){

            if(num%i==0){
                a=i;
                b=a+1;
                        if(num%b==0){
                    printf("%d and %d are consecutive factors\n",a,b);
                }
                }

            }

        }





return 0;
}
