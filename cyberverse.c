# include<stdio.h>

int main(int argc, char const *argv[])
{
    int T;
    scanf("%d",&T);
    int output[T];
    for(int i = 0;i < T;i++)
    {
        int N,K,min;
        scanf("%d %d",&N,&K);
        min = K/N;
        output[i] = min;
    }
    for (int i = 0; i < T; i++)
    {
        printf("%d\n",output[i]);
    }
    
    return 0;
}
