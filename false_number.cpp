#include<iostream>

using namespace std;


#define lli long long int


int main(){
    lli T;
    cin >> T;
    while(T--){
        string a;
        cin >> a;

        if(a[0]=='1'){
            a.insert(1,"0");
        }
        else{
            a.insert(0,"1");
        }

        cout << a << endl;
    }
}