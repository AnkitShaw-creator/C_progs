# include<iostream>
# include<vector>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        int N;
        cin >> N;
        vector<int> W(N);
        for(int i=0;i<N;i++){
            cin >> W[i];
        }

        int m = 0; // no of moves

        while(true){
            bool equal = true;
            for(int i = 0;i<N && equal;i++){ // checking whether the wages are same or not
                if(W[i]!=W[0]){
                    equal = false;
                }
            }
            if(equal) // exit if the wages have been equalized
                break;

            int mW = W[0];
            for (int i = 0; i < N; i++){ // finding the max wage
                mW = max(mW, W[i]);
            }
            
            for (int i = 0; i < N; i++){ // decreasing the max wages by 1
                if(W[i]==mW){
                    W[i]--;
                    m++;
                }
            }
            
        }
        cout << m << endl;
    }
}