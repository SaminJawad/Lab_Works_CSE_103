#include<stdio.h>
int main(){

    float CGPA,i,n,counter;

    printf("How many inputs you want\t:\t");
    scanf("%f",&n);

    counter=0;

    for(i=0;i<n;i=i+1){

        printf("Enter students CGPA\t:\t");
        scanf("%f",&CGPA);

        if(CGPA>=3.5 && CGPA<=4.00){

            counter=counter+1;

        }

    }

    printf("There are\t%.0f\t number of students who secured at least 3.5 CGPA",counter);

    return 0;
}


