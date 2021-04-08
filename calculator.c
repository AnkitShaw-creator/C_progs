#include<stdio.h>
int calculate(); 
int arr[10];
int main(int argc, char const *argv[])
{
    printf("Enter the values");
    for(int i=0;i<10;i++){
        scanf("%d",&arr[i]);
    }
    printf("The sum of the given values = %d",calculate());
    return 0;
}
int calculate(){
    int sm = 0;
    for(int i=0;i<10;i++){
        sm = sm+ arr[i];
    }
    return sm;
}
