#include<stdio.h>
int main(){

    int i,n,j,counter_A,counter_B,counter_C,counter_D;

    printf("Enter how many students marks you want to input\t:\t");
    scanf("%d",&n);

    int marks[n];

    counter_A=0;
    counter_B=0;
    counter_C=0;
    counter_D=0;

    for(i=0;i<n;i++){

        printf("Enter marks\t:\t");
        scanf("%d",&marks[i]);

    }

    for(j=0;j<n;j++){

        if(marks[j]>=90){
            counter_A=counter_A+1;
        }

        else if(marks[j]>=80){
            counter_B=counter_B+1;
        }

        else if(marks[j]>=70){
            counter_C=counter_C+1;
        }

        else if(marks[j]>=60){
            counter_D=counter_D+1;
        }

    }


    if (counter_A>counter_B && counter_A>counter_C && counter_A>counter_D){
        printf("Most of the students achieved A grade");
    }

    else if (counter_B>counter_A && counter_B>counter_C && counter_B>counter_D){
        printf("Most of the students achieved B grade");
    }

    else if (counter_C>counter_B && counter_A<counter_C && counter_C>counter_D){
        printf("Most of the students achieved C grade");
    }

    else if (counter_D>counter_B && counter_D>counter_C && counter_A<counter_D){
        printf("Most of the students achieved D grade");
    }


return 0;
}

