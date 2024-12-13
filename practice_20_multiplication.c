#include<stdio.h>
int main(){

    int num,i,multiplication;

    printf("Enter a number\t:\t");
    scanf("%d",&num);

    for(i=1;i<=10;i=i+1){

        multiplication=num*i;

        printf("%d*%d=%d/n",num,i,multiplication);

    }

return 0;
}
