#include <stdio.h>
int main(){

    int n,i,j,counter;


    printf("Enter how many inputs you want\t:\t");
    scanf("%d",&n);

    int age[n];

    counter=0;

    for(i=1;i<=n;i++){

        printf("Input Ages\t:\t");
        scanf("%d",&age[i]);

    }

    for(j=1;j<=n;j++){

        if (age[j]>=13 && age[j]<=19){
            counter=counter+1;
        }

    }

    printf("There are %d number of teenagers in the class",counter);



return 0;
}

