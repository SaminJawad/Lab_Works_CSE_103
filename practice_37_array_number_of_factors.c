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

        printf("For %d there are ",num[i]);

        for(j=1;j<=num[i];j++){

            if(num[i]%j==0){
                counter=counter+1;
            }
        }
        printf("%d numbers of factor\n",counter);
    }


return 0;
}
