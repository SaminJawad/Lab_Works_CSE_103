#include<stdio.h>
int main(){

    int x[100],y[100],i,sum1,sum2,avg1,avg2;

    sum1=0;
    sum2=0;

    for(i=0;i<5;i++){
        printf("Enter 1st semester marks\t:\t");
        scanf("%d",&x[i]);

        sum1=sum1+x[i];
    }

    avg1=sum1/5.0;

    for(i=0;i<5;i++){
        printf("Enter 2nd semester marks\t:\t");
        scanf("%d",&y[i]);

        sum2=sum2+y[i];

        avg2=sum2/5.0;
    }

    if(avg1>avg2){
        printf("2nd semester exam was tough");
    }
    else{
        printf("1st semester exam was tough");
    }


return 0;
}
