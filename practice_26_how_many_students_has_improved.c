#include<stdio.h>
int main(){

    int x[100],y[100],i,j,sum1,sum2,avg1,avg2,counter,marks;

    counter=0;

    for(i=0;i<5;i++){
        printf("Enter 1st semester marks\t:\t");
        scanf("%d",&x[i]);
    }

    for(i=0;i<5;i++){
        printf("Enter 2nd semester marks\t:\t");
        scanf("%d",&y[i]);
    }

    for(j=0;j<5;j++){
        if(y[j]>x[j]){
            counter=counter+1;
            marks=y[j]-x[j];

            printf("%d number student has improved his number by %d marks\n",j,marks);
        }
    }


        printf("%d numbers of students has improved their results",counter);

return 0;
}
