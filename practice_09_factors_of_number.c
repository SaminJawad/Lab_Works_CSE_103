#include<stdio.h>
int main(){

    int num,counter,i;

    printf("Enter a number\t:\t");
    scanf("%d",&num);

    counter=0;

    if(num<0){
        printf("The number is composit");
    }

    else{

        for(i=1;i<num;i=i+1){
                if(num%i==0){
                        printf("The Factors are\t%d\t\n",i);
                }


    }



return 0;
}
}
