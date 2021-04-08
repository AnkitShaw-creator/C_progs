#include<stdio.h>

int main(){
    int T;
    scanf("%d",&T);
    int arr[T];
    while (T--){
        int A,B;
        scanf("%d %d",&A,&B);
        arr[T] = A+B;
    }
    T = sizeof(arr)/sizeof(int);
    while(T--){
        printf("%d \n",arr[T]);
    }
    
    return 0;
}
