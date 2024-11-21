#include<stdio.h>
int main(){

    int ages,i,n,counter_child,counter_teenager,counter_senior_citizen;

    printf("How many inputs you want\t:\t");
    scanf("%d",&n);

    counter_child=0;
    counter_teenager=0;
    counter_senior_citizen=0;

    for(i=0;i<n;i=i+1){

        printf("Enter persons ages\t:\t");
        scanf("%d",&ages);

        if(ages>=0 && ages<=12){
            counter_child=counter_child+1;
        }

        else if(ages>=13 && ages<=19){
            counter_teenager=counter_teenager+1;
        }

        else if(ages>=65){
            counter_senior_citizen=counter_senior_citizen+1;
        }

    }

    printf("child\t:\t %d\n",counter_child);
    printf("teenager\t:\t %d\n",counter_teenager);
    printf("senior citizen\t:\t %d\n",counter_senior_citizen);

    return 0;
}

