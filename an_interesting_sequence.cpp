# include<iostream>
# include<vector>
//#include<algorithm>

using namespace std;

int gcd(long int a, long int b)
{
    // Everything divides 0
    if (a == 0)
        return b;
    if (b == 0)
        return a;

    // base case
    if (a == b)
        return a;

    // a is greater
    if (a > b)
        return gcd(a - b, b);
    return gcd(a, b - a);
}

int main()
{
    long int T;
    cin >> T;
    while(T--){
        long int k, sm=0;
        cin >> k;
        long int s[2*k+2];
        s[0]=0;
        for (long int i = 1; i <= 2*k+1; i++)
        {
            s[i]=k+i*i;
            //cout<<s[i]<<" ";
        }//cout<<endl;
        
        for(long int i=1;i<2*k+1;i++){
            sm = sm + gcd((k + i * i), (k + (i+1) * (i+1)));
        }

        cout<<sm<<endl;
    }

    return 0;
}
