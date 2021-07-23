#include<iostream>
#include<vector>
#include<map>
using namespace std;


void countFactor(){
    int n;
    cin >> n;
    map<int,int> nmp;
    while(n--){
        int temp;
        cin >> temp;
        for(int i=2;i*i<=temp;++i){
            while(temp%i==0){
                nmp[i]++;
                temp = temp/i;
            }
            
        }
        if (temp > 1){
            nmp[temp]++;
        }
    }
    int ans = 1;
    for (auto &a : nmp){
        ans *= (a.second + 1);
    }
    cout << ans<< endl;
}

int main()
{
    int T;
    cin >> T; 
    while(T--){
        countFactor();
    }
}
