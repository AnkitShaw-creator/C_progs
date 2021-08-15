#include<bits/stdc++.h>

using namespace std;
#define ll long long int 

/*
4
10 5 5
10 6 5
10 4 5
10 8 5
*/

int main(){
    ll t;
    cin >> t;
    while (t--)
    {
        ll n,p,k, d=0,i,j,x=0;
        cin >> n >> p >> k;

        for(i=0;i<n;i++){
            for(j=0;j<n;j++){
                if(j%k==i && j != p)
                    ++d;
                else{
                    d++;
                    x=1;
                    break;
                }
            }
            if(x==1){
                cout<<d<<endl;
                break;
            }
            
        }
    }

}