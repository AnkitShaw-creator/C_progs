#include<bits/stdc++.h>
#include<math.h>

using namespace std;
#define ll long long int


ll fact(ll a){
    if(a<=1)
        return 1;
    else
        return a*fact(a-1);
}

ll getNumDigits(ll a){
    ll x = abs(a);  
    return (x < 10 ? 1 :   
        (x < 100 ? 2 :   
        (x < 1000 ? 3 :   
        (x < 10000 ? 4 :   
        (x < 100000 ? 5 :   
        (x < 1000000 ? 6 :   
        (x < 10000000 ? 7 :  
        (x < 100000000 ? 8 :  
        (x < 1000000000 ? 9 :  
        10)))))))));  
}

ll product(ll a){
    ll P = 1;
    while(a != 0){
        P *= a%10;
        a /= 10;
    }
    return P;
}


int main(){
    ll T;
    cin >> T;
    while(T--){
        ll n, f, x, p,c=0,i;
        cin >> n;
        for(i=0;i<=n;i++){
            if(i != 11 && i%10 != 0){
                x = getNumDigits(i);
                f = fact(x);
                p = product(i);
                if(p>=f)
                    c++;
            }  
        }
        cout << c << endl;
    }
}