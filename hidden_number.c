# include<stdio.h>


int main()
{
    int T;
    scanf("%d",&T);
    int output[T][2];
    if( 1<=T<=100000){
        for (int i = 0; i < T; i++)
        {
            int N,A,B;
            scanf("%d",&N);
            if(1<=N<=1000000000){
                if(N != 1){
                    for ( int j = N-1; j > 0; j--)
                    {
                        if(N%j == 0){
                            B = j;
                            break;
                        }

                    }
                }
                else
                {
                    B = 1;
                }
                
                A = N/B;
                //printf("%d,%d",A,B);
                output[i][0] = (A<B)?A:B;
                output[i][1] = (A<B)?B:A;
                
            }
        }
    }
    for (int i = 0; i < T; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ",output[i][j]);
        }
        printf("\n");
    }

    return 0;
}
