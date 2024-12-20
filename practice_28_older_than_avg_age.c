#include <stdio.h>
int main(){

    int n,i,j,counter;
    float avg,sum;

    printf("Enter how many inputs you want\t:\t");
    scanf("%d",&n);

    int age[n];

    sum=0;
    counter=0;

    for(i=1;i<=n;i++){

        printf("Input Ages\t:\t");
        scanf("%d",&age[i]);

        sum=sum+age[i];

    }

    avg=sum/n;

    for(j=1;j<=n;j++){

        if (age[j]>avg){
            counter=counter+1;
        }

    }

    printf("The average age is\t:\t%.2f\n",avg);
    printf("There are %d people who are older than the average age",counter);



return 0;
}
