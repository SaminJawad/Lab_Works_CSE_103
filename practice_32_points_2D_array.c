#include <stdio.h>
int main(){

    int i,n,j,counter_1,counter_2,counter_3,counter_4;

    printf("Enter how many points you want to input\t:\t");
    scanf("%d",&n);

    int x[n],y[n];

    counter_1=0;
    counter_2=0;
    counter_3=0;
    counter_4=0;

    for(i=1;i<=n;i++){

        printf("Enter the value of x\t:\t");
        scanf("%d",&x[i]);

        printf("Enter the value of y\t:\t");
        scanf("%d",&y[i]);

    }


    for (j=1;j<=n;j++){

        if(x[j]>0 && y[j]>0){
         counter_1=counter_1+1;
     }
        else if(x[j]<0 && y[j]>0){
         counter_2=counter_2+1;
     }
        else if(x[j]<0 && y[j]<0){
         counter_3=counter_3+1;
     }
        else if(x[j]>0 && y[j]<0){
         counter_4=counter_4+1;
     }

    }


    printf("There're %d points in 1st quadrant\n",counter_1);
    printf("There're %d points in 2nd quadrant\n",counter_2);
    printf("There're %d points in 3rd quadrant\n",counter_3);
    printf("There're %d points in 4th quadrant\n",counter_4);

return 0;
}
