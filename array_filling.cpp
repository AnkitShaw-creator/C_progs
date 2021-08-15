#include<bits/stdc++.h>

using namespace std;
#define ll  unsigned long long int

int main(){
    ll T;
    cin >> T;
    while(T--){
        ll n, m, i;
        cin >> n >> m;
        ll a[n+1];
        memset(a,0, sizeof(a));
        for(i=1;i<=m;i++){
            ll x,y,j;
            cin >> x >> y;

            for(j=1;j<=n;j++){
                if(j%y != 0 && (a[j] == 0 || a[j]< x)){
                    a[j]=x;
                }
            }
           /* for(j=1;j<=n;j++){
                cout << a[j] <<" ";
            }
            cout<< endl;*/
        }
        ll sum =0; 
        sum = accumulate(a,a+n+1,0);
        cout << sum << endl;
    }
}