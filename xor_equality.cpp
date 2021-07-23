#include<iostream>
#include<math.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long int T;
    cin >> T;
    while(T--){
        long long int N;
        cin >> N;
        for(long long int i = 0; i<= pow(2,N)-1;i++){
            if(i^(i+1) == (i+2)^(i+3)){
                cout << (i % ((long long int)pow(10,9)+7)) << " ";
            }
        }
    }
    return 0;
}
  // WRONG 