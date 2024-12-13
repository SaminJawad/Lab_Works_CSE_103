#include<stdio.h>
int main(){

    int num,sum,last_digit;

    printf("Enter a number\t:\t");
    scanf("%d",&num);

    sum=0;

    while(num!=0){

        last_digit=num%10;
        num=num/10;

        sum=sum+last_digit;

    }

    printf("The summation of the digits of this number is\t:\t%d",sum);


return 0;
}
