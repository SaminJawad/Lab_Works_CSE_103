#include<stdio.h>
int main(){

    float temperature,avg,sum,i,n,counter;

    printf("How many inputs you want\t:\t");
    scanf("%f",&n);

    counter=0;
    sum=0;

    for(i=0;i<n;i=i+1){

        printf("Enter the temperature of the day in celcius\t:\t");
        scanf("%f",&temperature);

       if(temperature>=30){

        sum=sum+temperature;
        counter=counter+1;

       }

    }

     avg=sum/counter;

    printf("The average temperature of those days when temperature cross 30 is\t%f\t",avg);

    return 0;
}

