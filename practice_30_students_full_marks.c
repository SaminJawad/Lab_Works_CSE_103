#include<stdio.h>
int main(){

    int i,n,j,counter;

    printf("Enter how many students marks you want to input\t:\t");
    scanf("%d",&n);

    int marks[n];

    counter=0;

    for(i=0;i<n;i++){

        printf("Enter marks\t:\t");
        scanf("%d",&marks[i]);

    }

    for(j=0;j<n;j++){

        if(marks[j]==30){
            counter=counter+1;
        }

    }

    if(counter==0){
        printf("No students got full marks");
    }

    else{
        printf("There are %d number of students who got full marks",counter);
    }


return 0;
}
