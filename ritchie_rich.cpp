#include<iostream>

using namespace std;
#define lli long long int

int main()
{
    lli T, a,b,x;
    cin >> T;
    while(T--){
        cin >> a >> b >> x;
        lli ans = (b-a)/x;
        cout << ans << endl;
    }
}
