# include<iostream>
# include<bits/stdc++.h>
using namespace std;

signed long int nCr(int n, int r){
    long long int a=1,b=1;

    if(r>n-r){
        r = n-r;
    }
    if(r != 0){
        while(r){
            a *= n; //n*(n-1)*(n-2)*(n-3)*....
            b *= r; //r*(r-1)*(r-2)*(r-3)*....

            long long m = __gcd(a,b);

            a /= m;
            b /= m;

            n--;
            r--;
        }
    }
    else {
        a = 1;
    }
    return a;

}

int main()
{
    int T;
    cin >> T;
    while(T--){
        long int n,k;
        cin >> n >> k;
        signed long int possibilities =nCr(n-1,k-1);
        cout << possibilities << endl;
    }
}
