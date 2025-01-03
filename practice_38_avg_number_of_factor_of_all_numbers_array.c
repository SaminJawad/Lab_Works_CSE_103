#include<stdio.h>
int main(){

    int n,i,j,counting,sum;
    float avg;

    printf("Enter how many inputs you want\t:\t");
    scanf("%d",&n);

    int num[n],counter[n];

    sum=0;
    avg=0;

    for(i=0;i<n;i++){

        printf("Enter the numbers\t:\t");
        scanf("%d",&num[i]);

        counting=0;

        for(j=1;j<=num[i];j++){

            if(num[i]%j==0){
                counting=counting+1;
            }
        }

        counter[i]=counting;
        sum=sum+counter[i];

    }

    avg=sum/n;

    printf("The average number of factor of all numbers is\t:\t%.2f",avg);


return 0;
}

