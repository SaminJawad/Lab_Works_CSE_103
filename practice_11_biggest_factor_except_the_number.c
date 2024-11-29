#include<stdio.h>
int main(){

    int num,i,biggest;

    printf("Enter a number\t:\t");
    scanf("%d",&num);



    if(num<0){
        printf("The number is composit");
    }

    else{

        for(i=2;i<num;i=i+1){
                if(num%i==0){
                        biggest=i;
                }
        }

        printf("The biggest factors except the number is\t:\t%d",biggest);
    }



return 0;
}

