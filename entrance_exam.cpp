#include<bits/stdc++.h>

using namespace std;
typedef long long int ll;


void calculate(){
    ll n,k,e,m,i,j,x=0;
    cin >> n >> k >> e >> m;
    ll sm[n-1]={0};

    for(i=0;i<n-1;i++){
        for(j=0;j<e;j++){
            ll a;
            cin >> a;
            sm[i] += a;
        }
    }
    sort(sm,sm+n-1);
    for(i=0;i<e-1;i++){
        int a;
        cin >> a;
        x+=a;
    }
    ll g = sm[n-k-1];
    if(x>g)
        cout << 0 << endl;

    else{
        if(g-x+1 <= m)
            cout << g-x+1 << endl;
        
        else
            cout << "Impossible" << endl;
    }
}


int main(){
    ll T;
    cin >> T;
    while(T--)
        calculate();
    
    return 0;

}