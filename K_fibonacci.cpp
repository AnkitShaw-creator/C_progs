# include<bits/stdc++.h>
using namespace std;
#define ll long long int
int mod = 1e9 + 7;


/*
Given integers ‘K’ and ‘N’, the task is to find the Nth term of the K-Fibonacci series.
In K – Fibonacci series, the first ‘K’ terms will be ‘1’ and after that every ith term 
of the series will be the sum of previous ‘K’ elements in the same series. 
*/

ll create_series(ll a,ll b){
    ll series[a+1];
    series[0]=0;
    ll sum = 0;
    for(ll i=1;i<a+1;i++){
        if(i<=b){
            series[i] = 1;
            sum = (sum+series[i])%mod;
        }
        else{
            series[i]=sum%mod;
            sum= (sum+series[i]-series[i-b])%mod;
        }
    }
    return series[a];
}

int main(int argc, char const *argv[])
{
    ll n,k;
    cin >> n >> k;
    if(n<=k){
        cout << "1" << endl;
    }
    else{
        cout<<create_series(n,k)<< endl;
    }
}
