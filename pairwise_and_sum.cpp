
#include<bits/stdc++.h>
#include<vector>

using namespace std;

#define int long long
#define vi vector<int>
#define in(arr,n) for(int i=0;i<n;i++) cin >> arr[i]

/** WRONG */

int solve(vi &v, int n){
    int ans=0;

    for(int i = 31; i >= 0; i--){
        int sbit=1;
        int c=0;
        for (int j = 0; i < n; i++){
            if(v[j]&sbit << i){
                c++;
            }
        }
        c = c*(c-1)/2; // number of pairs
        ans += c*(sbit<<i);
    }
    return ans;
}



int32_t main(){
    
    int test = 1;

    while(test--){
        int n;
        cin >> n;

        vi v(n);
        in(v,n);

        int ans = solve(v,n);
        cout << ans << endl;
    }
    return 0;
}
