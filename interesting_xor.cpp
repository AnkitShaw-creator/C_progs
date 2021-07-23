#include<bits/stdc++.h>


using namespace std;
#define lli long long int

string con_bin(lli a){
    string s ="";
    while(a>0){
        if(a%2==1)
            s= "1"+s;
        else
            s = "0"+s;
        a/=2;
    }
    return s;
}
lli con_dec(string s){
    int a = 0, t=1;
    for(lli i = s.length()-1;i >= 0;i--){
        a +=(s[i]-'0')* t;
        t*=2;
    }
    return a;
}


/**
 * A    B   C
 * 1    1   0
 * 1    0   1
 * 0    1   1
 * 0    0   0   
 * 
 * 
 * **/


int main()
{   
    lli T;
    cin >> T;
    while(T--){
        lli n;
        cin >> n;
        // ERROR
        string N = con_bin(n);
        string a ="",b="";
        bool first = false;

        for(lli i = 0;i < N.length();i++){
            if(N[i] == '0'){
                a += 1;
                b += 1;
            }
            else{
                if(first){
                    a += "0";
                    b += "1";
                    
                }
                else{
                    a += "1";
                    b += "0";
                    first = true;
                }
            }
        }

        lli x = con_dec(a);
        lli y = con_dec(b);
        cout << a << endl;
        cout << b << endl;
        cout << x << endl;
        cout << y << endl;
        cout << x*y << endl;
    }

}
