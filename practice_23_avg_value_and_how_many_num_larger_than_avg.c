#include<stdio.h>
int main(){

    int x[100],i,j,sum,counter,avg;

    counter=0;
    avg=0;
    sum=0;

    for(i=0;i<10;i++){
        printf("Enter the values\t:\t");
        scanf("%d",&x[i]);

        sum=sum+x[i];
    }

    avg=sum/10.0;

    for(j=0;j<10;j++){
        if(x[j]>avg){
            counter=counter+1;

            printf("The values which are larger than average values are\t:\t%d\n",x[j]);
        }
    }

    printf("There are %d numbers which are larger than the average value",counter);
    printf("The average value of the numbers is\t:\t%f,avg");

return 0;
}
