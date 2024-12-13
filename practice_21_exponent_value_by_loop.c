#include<stdio.h>
int main(){

    int base_num,power_num,original_num,i;

    printf("Enter the base number\t:\t");
    scanf("%d",&base_num);

    printf("Enter the power number\t:\t");
    scanf("%d",&power_num);

    original_num=base_num;

    for(i=1;i<power_num;i=i+1){

        base_num=base_num*original_num;

    }

    printf("The exponent output is\t:\t%d",base_num);


return 0;
}
