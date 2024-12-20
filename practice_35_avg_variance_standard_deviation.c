#include<stdio.h>
#include<math.h>
int main(){

    int i,n;
    double sum_1,sum_2,avg,variance,standard_deviation;

    printf("How many inputs you want\t:\t");
    scanf("%d",&n);

    int num[n];

    avg=0;
    sum_1=0;
    sum_2=0;

    for(i=0;i<n;i++){
        printf("Enter the values\t:\t");
        scanf("%d",&num[i]);

        sum_1=sum_1+num[i];
    }

    avg=sum_1/n;

    for(i=0;i<n;i++){

        sum_2=sum_2+pow(num[i]-avg,2);

    }

    variance=sum_2/n;

    standard_deviation=sqrt(variance);

    printf("The average value is\t:\t%lf\n",avg);
    printf("The variance value is\t:\t%lf\n",variance);
    printf("The standard deviation value is\t:\t%lf",standard_deviation);


return 0;
}
