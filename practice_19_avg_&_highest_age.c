#include<stdio.h>
int main(){

    int age,i,n,avg,sum_of_ages,new_age;

    printf("Enter how many ages you want to input\t:\t");
    scanf("%d",&n);

    new_age=0;
    sum_of_ages=0;

    for(i=1;i<=n;i=i+1){

        printf("Enter ages\t:\t");
        scanf("%d",&age);

        sum_of_ages=sum_of_ages+age;
        avg=sum_of_ages/n;

        if(age>new_age){
            new_age=age;
        }

    }

    printf("The average of the ages is \t:\t%d",avg);
    printf("The highesr age among the inputs is \t:\t%d",new_age);



return 0;
}
