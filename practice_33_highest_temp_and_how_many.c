#include <stdio.h>
int main(){

    int i,n,j,k,counter,highest;

    printf("Enter how many inputs you want\t:\t");
    scanf("%d",&n);

    int temp[n];

    counter=0;
    highest=0;


    for(i=1;i<=n;i++){

        printf("Enter temperature\t:\t");
        scanf("%d",&temp[i]);

    }

    for(j=1;j<=n;j++){

        if(temp[j]>highest){
            highest=temp[j];
        }

    }

    printf("The highest temperature is\t:\t%d\n",highest);

    for(k=1;k<=n;k++){

        if(temp[k]==highest){
            counter=counter+1;
        }

    }

        printf("%d number of temperatures are highest in the list",counter);


return 0;
}

