#include<stdio.h>
int main(){

    int num,i,sum;

    printf("Enter a number\t:\t");
    scanf("%d",&num);

    sum=1;

    if(num<0){
        printf("Please enter positive integers");
    }

    else{

        for(i=1;i<num;i=i+1){
                if(num%i==0){
            sum=sum*i;
            }
        }

        printf("The factorial of the factor is\:\t%d",sum);

    }



return 0;
}
