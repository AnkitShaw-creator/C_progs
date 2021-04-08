#include<stdio.h>

int main()
{
    int x;
    float y;
    scanf("%d %f",&x,&y);
    if((0<x<=2000)&&(0<=y<=2000)){
        if(x%5 == 0 && (x+0.50)<=y){
            y = y-x -0.50;
            
        }
        
    }
    printf("%.2f",y);
    return 0;
}
