#include<stdio.h>
int main(){

    int num,last_digit,qube_of_last_digit,sum,new_variable;

    printf("Enter any number to know if it is armstrong or not\t:\t");
    scanf("%d",&num);

    sum=0;
    new_variable=num;

    while (num!=0){

        last_digit=num%10;
        num=num/10;

        qube_of_last_digit=last_digit*last_digit*last_digit;

        sum=sum+qube_of_last_digit;

    }

    if(sum=new_variable){
        printf("The number is armstrong");
    }

    else{
        printf("The number is not an armstrong number");
    }


return 0;
}
