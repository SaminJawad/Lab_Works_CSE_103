#include<stdio.h>
int main(){

    int num,i;
    float counter,sum,average;

    printf("Enter a number\t:\t");
    scanf("%d",&num);

    counter=0;
    sum=0;

    if(num<0){
        printf("The number is composit");
    }

    else{

        for(i=1;i<num;i=i+1){
                if(num%i==0){
                        counter=counter+1;
                        sum=sum+i;
                        average=sum/counter;
                }
    }

     printf("The average of the factors is\t:%.2f\t",average);

return 0;
}
}

