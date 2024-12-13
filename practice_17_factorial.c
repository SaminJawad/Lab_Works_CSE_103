#include<stdio.h>
int main(){

    int num,last_digit,factorial;

    printf("Enter a number\t:\t");
    scanf("%d",&num);

    factorial=1;

    if(num<0){
        printf("The factorial of a negative number doesn't exist");
    }

    else if(num==0){
        printf("The factorial of 0 is 1");
    }

    else{

        for(num;num>0; num=num-1){

            factorial=factorial*num;

        }

        printf("The factorial is\t:\t%d",factorial);

    }


return 0;
}
