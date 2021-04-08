#include<stdio.h>
#include<math.h>

long long int gcd(long long int a, long long int b){
    if(b==0)
    return a;
    else{
        return gcd(b,a%b);
    }
}

int main()
{
    int T;
    scanf("%d",&T);
    int output[T][2];
    for (int i = 0; i < T; i++)
    {   
        long long int n,m,LCM ,GCD;
        scanf("%d %d",&n,&m);
        GCD = gcd((m>n)?m:n,(n<m)?n:m);
        LCM = (n*m)/GCD;
        output[i][0]=GCD;
        output[i][1]=LCM;
    }
    
    for (int j = 0; j < T; j++)
    {
       for (int k = 0; k < 2; k++)
       {
           printf("%d ",output[j][k]);
       }
       printf("\n");
    }
    
    return 0;
}
