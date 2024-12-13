#include<stdio.h>
int main(){

    int num,counter,i;

    printf("Enter a number\t:\t");
    scanf("%d",&num);

    counter=0;

    for (i=1;i<=num;num=num+1){

        if (i%3==0 && i%5==0){

            counter=counter+1;

            printf("%d is the divisible number by both 3 & 5 in the range of 1 to %d\n",i,num);

        }

    }

    printf("In this range %d numbers are divisible by both 3 & 5",counter);


return 0;
}
