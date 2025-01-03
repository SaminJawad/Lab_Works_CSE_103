#include<stdio.h>
int main(){

    int i,num[100],GCD,j;

    for(i=1;i<=10;i++){
        printf("Enter the number\t:\t");
        scanf("%d",&num[i]);
    }

    for(i=1;i<=10;i=i+2){
        for(j=1;j<=10;j++){
        if(num[i]%j==0 && num[i+1]%j==0){
            GCD=j;
        }
        }

        printf("The GCD of %d and %d is\t:\t%d\n",num[i],num[i+1],GCD);

    }




return 0;
}
