#include<stdio.h>
int main(){

    double sum,avg;
    int n,i;

    printf("Enter how many inputs you want\t:\t");
    scanf("%d",&n);

    int temp[n];

    for(i=1;i<=n;i++){

        printf("Input Temperatures\t:\t");
        scanf("%d",&temp[i]);

        sum=sum+temp[i];

    }

    avg=sum/n;

    printf("The average of the temperatures is\t:\t%lf",avg);

return 0;
}
