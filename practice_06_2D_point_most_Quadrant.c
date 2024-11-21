#include<stdio.h>
int main(){

    int x,y,i,n,q1,q2,q3,q4,px,nx,py,ny,origin;

    printf("How many inputs you want\t:\t");
    scanf("%d",&n);

    q1=0;
    q2=0;
    q3=0;
    q4=0;
    px=0;
    py=0;
    nx=0;
    ny=0;
    origin=0;

    for(i=0;i<n;i=i+1){

        printf("Enter the x value of 2D point\t:\t");
        scanf("%d",&x);

        printf("Enter the y value of 2D point\t:\t");
        scanf("%d",&y);

        if(x>0 && y>0){
            q1=q1+1;
        }
        else if(x<0 && y>0){
            q2=q2+1;
        }
        else if(x<0 && y<0){
            q3=q3+1;
        }
        else if(x>0 && y<0){
            q4=q4+1;
        }
        else if(x>0 && y==0){
            px=px+1;
        }
        else if(x<0 && y==0){
            nx=nx+1;
        }
        else if(x==0 && y>0){
            py=py+1;
        }
        else if(x==0 && y<0){
            ny=ny+1;
        }
        else if(x==0 && y==0){
            origin=origin+1;
        }

    }

    if (q1>q2 && q1>q3 && q1>q4 && q1>px && q1>nx && q1>py && q1>ny && q1>origin){
        printf("Maximum points fall in quardrent 1");
    }

    else if(q2>q1 && q2>q3 && q2>q4 && q2>px && q2>nx && q2>py && q2>ny && q2>origin){
        printf("Maximum points fall in quardrent 2");
    }

    else if(q3>q1 && q3>q2 && q3>q4 && q3>px && q3>nx && q3>py && q3>ny && q3>origin){
        printf("Maximum points fall in quardrent 3");
    }

    else if(q4>q1 && q4>q2 && q4>q3 && q4>px && q4>nx && q4>py && q4>ny && q4>origin){
        printf("Maximum points fall in quardrent 4");
    }

    else if(px>q1 && px>q2 && px>q4 && px>q3 && px>nx && px>py && px>ny && px>origin){
        printf("Maximum points fall in positive x axis");
    }

    else if(nx>q1 && nx>q2 && nx>q4 && nx>px && nx>q3 && nx>py && nx>ny && nx>origin){
        printf("Maximum points fall in negative x axis");
    }

    else if(py>q1 && py>q2 && py>q4 && py>q3 && py>nx && py>px && py>ny && py>origin){
        printf("Maximum points fall in positive y axis");
    }

    else if(ny>q1 && ny>q2 && ny>q4 && ny>px && ny>q3 && ny>py && ny>nx && ny>origin){
        printf("Maximum points fall in negative y axis");
    }

    else{
        printf("Maximum points fall in origin");
    }



    return 0;
}

