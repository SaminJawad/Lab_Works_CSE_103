#include<stdio.h>
int main(){

    int i,n,j,counter;

    printf("Enter how many numbers you want to input\t:\t");
    scanf("%d",&n);

    int num[n];

    counter=0;

    for(i=0;i<n;i++){
        printf("Enter the numbers\t:\t");
        scanf("%d",&num[i]);
    }

    for(j=1;j<10;j++){
        if(num[j]%num[j-1]==0){
            counter=counter+1;

            printf("%d number day is divisible by its immediate previous number\n",j);
        }
    }

    printf("There are %d numbers which are divisible by its immediate previous number",counter);


return 0;
}

