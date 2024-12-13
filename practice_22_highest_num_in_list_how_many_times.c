#include<stdio.h>
int main(){

    int a,b,i,m,counter,x[100];

    for(i=0;i<10;i=i+1){
        printf("Enter the values\t:\t");
        scanf("%d",&x[i]);
    }

    m=x[0];

    for(a=1;a<10;a++){
        if(x[a]>m){
            m=x[a];
        }
    }

    for(b=0;b<10;b++){
        if(x[b]==m){
            counter=counter+1;
        }
    }

    printf("The highest number is\t:\t%d\n It is %d times in the list",m,counter);

return 0;
}
