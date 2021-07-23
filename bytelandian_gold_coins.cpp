# include<iostream>
# include<map>
using namespace std;

map<long long int, long long int>a;

long long int max(long long int a, long long int b){
    return a>b?a:b;
}



long long int getMoney(long long int n){
    if(n <= 11){
        return n;
    }
    else if( a[n] != 0){
        return a[n];
    }
    else{
        long long int c  = max(n,getMoney(n/2)+getMoney(n/3)+getMoney(n/4));
        a[n]=c;
        return c;
    }
}

int main()
{   long long int T;
    while(cin >> T){
        cout<<getMoney(T)<<endl;
    }
    return 0;
}
