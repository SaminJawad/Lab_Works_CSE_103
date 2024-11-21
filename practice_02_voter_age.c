#include<stdio.h>
int main(){

    int ages,i,n,counter;

    printf("How many inputs you want\t:\t");
    scanf("%d",&n);

    counter=0;

    for(i=0;i<n;i=i+1){

        printf("Enter persons ages\t:\t");
        scanf("%d",&ages);

        if(ages>=18){

            counter=counter+1;

        }

    }

    printf("There are\t%d\t number of teenagers",counter);

    return 0;
}

