#include<stdio.h>
int main(){

    int n,i,j,counter;

    printf("Enter how many inputs you want\t:\t");
    scanf("%d",&n);

    int num[n];

    for(i=0;i<n;i++){

        printf("Enter the numbers\t:\t");
        scanf("%d",&num[i]);

        counter=0;

        for(j=1;j<=num[i];j++){

            if(num[i]%j==0){
                counter=counter+1;
            }
        }
        if(counter==2){
                printf("%d is prime\n",num[i]);
            }
    }


return 0;
}
