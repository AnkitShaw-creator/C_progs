#include<bits/stdc++.h>

using namespace std;
#define ll long long int 


int main(){
    ll t;
    cin>> t;

    while(t--){
        ll n, x=0;
        cin >> n;

        for(ll c=1; c<=n; c++){
            for(ll b=c; b<=n; b+=c){
                if(b%c==0){
                    for(ll a=c; a<=n; a+=b){
                        if(a%b==c)
                            x++;
                    }
                }
            }
        }
        cout<<x<<endl;
    }

    return 0;
}