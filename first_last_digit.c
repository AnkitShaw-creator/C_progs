# include<stdio.h>
# include<math.h>

int main()
{
    int T;
    scanf("%d",&T);
    int output[T];
    for (int i = 0; i < T; i++)
    {   
        int m,n,sm,c=0;
        scanf("%d",&n);
        m=n;
        while (m>0)
        {
            c++;
            m = m/10;
        }
        sm = n%10+n/pow(10,c-1);
        output[i] = sm;
    }
    for (int i = 0; i < sizeof(output)/sizeof(int); i++)
    {
        printf("%d\n",output[i]);
    }
    return 0;
}
