# include<iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int T;
    cin >> T;
    while(T--){
        int X, A, B;
        cin >> X >> A >> B;
        int s = A +(100-X)*B;
        cout<< s*10<< endl;
    }
    return 0;
}
