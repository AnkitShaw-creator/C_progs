# include<bits/stdc++.h>

using namespace std;

#define ll long int


int main(){
    ll T;
    cin >> T;
    while(T--){
        ll x,y;
        cin >> x >> y;
        if(x != y){
            if (x > y)
            {
                if ((x - y) % 2 == 0)
                    cout << 1 << endl;
                else
                    cout << 2 << endl;
            }
            else if (x < y)
            {
                if ((y - x) % 2 != 0)
                    cout << 1 << endl;

                else if ((y - x) % 4 == 0)
                    cout << 3 << endl;
                else
                    cout << 2 << endl;
            }
        }
        else{
            cout << 0 << endl;
        }
    }
}