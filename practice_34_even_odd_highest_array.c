#include <stdio.h>
int main(){

    int i,n,j,k,counter_even,counter_odd,highest_even,highest_odd;

    printf("Enter how many inputs you want\t:\t");
    scanf("%d",&n);

    int num[n];

    counter_even=0;
    counter_odd=0;
    highest_even=0;
    highest_odd=0;


    for(i=1;i<=n;i++){

        printf("Enter numbers\t:\t");
        scanf("%d",&num[i]);

    }

    for(j=1;j<=n;j++){

        if(num[j]%2==0){

                if(num[j]>highest_even){
                    highest_even=num[j];
                }
        }

    }

    printf("The highest even number is\t:\t%d\n",highest_even);

    for(k=1;k<=n;k++){

        if(num[k]%2!=0){

                if(num[k]>highest_odd){
                    highest_odd=num[k];
                }
        }

    }

         printf("The highest odd number is\t:\t%d\n",highest_odd);

return 0;
}


