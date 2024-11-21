#include<stdio.h>
int main(){

    float population,area,density,n,i,counter;

    printf("How many inputs you want\t:\t");
    scanf("%f",&n);

    counter=0;

    for(i=0;i<n;i=i+1){

        printf("Enter the population\t:\t");
        scanf("%f",&population);

        printf("Enter the area\t:\t");
        scanf("%f",&area);

        density=population/area;

        if(density>500){
            counter=counter+1;
        }

    }

    printf("There are\t%.2f\t number of countries whichs density is more than 500",counter);

    return 0;
}


