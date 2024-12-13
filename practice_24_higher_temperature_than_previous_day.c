#include<stdio.h>
int main(){

    int i,j,temperature[100],counter;

    counter=0;

    for(i=0;i<10;i++){
        printf("Enter the temperatures\t:\t");
        scanf("%d",&temperature[i]);
    }

    for(j=0;j<10;j++){
        if(temperature[j]>temperature[j-1]){
            counter=counter+1;

            printf("%d number day has higher temperature than previous day\n",j);
        }
    }

    printf("There are %d numbers of days which have higher temperature than their previous day",counter);


return 0;
}
