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

        for(i=2;i<num;i=i+1){
                if(num%i==0){
            counter=counter+1;
                }
        }

        if(counter==0){
        printf("The number is Prime");
    }
    else{
        printf("The number is Composit");
    }

    }



return 0;
}
