# include<stdio.h>
# include<math.h>

void sortArray(int a[],int y){
    for (int i = 0; i < y; i++)
    {
        for (int j = 0; i < y; j++)
        {
            if(a[i]>a[j]){
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
        
    }
    
}
int sum(int a[],int y){
    int sm=0;
    for (int i = 0; i < y; i++)
    {
        sm = sm+a[i];
    }
    return sm;

}
int main()
{
    int T;
    scanf("%d",&T);
    int output[T];
    for (int i = 0; i < T; i++)
    {
        int N,M,c=0;
        scanf("%d %d", &N,&M);
        int lN[N],lM[M];
        for(int j=0;j<N;j++){
            scanf("%d",&lN[j]);
        }
        for(int j=0;j<M;j++){
            scanf("%d",&lM[j]);
        }
        while(sum(lN,N)<sum(lM,M)){
            
            sortArray(lN,N);
            sortArray(lM,M);
            int t = lN[0];
            lN[0] = lM[M-1];
            lM[M-1] = t;
            c++;
        }
    }
    
    return 0;
}
