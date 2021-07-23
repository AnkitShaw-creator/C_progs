#include<iostream>

using namespace std;

int main(){
    int T;
    cin >> T;
    while(T--){
        string s;
        cin >> s;

        int l = s.length();

        if(s[0]=='<'&& s[1]=='/' && s[l-1]=='>' && l > 3){
            string a="incorrect";
            for(int i = 2; i < l-1;i++){
                if(islower(s[i]) && isalnum(s[i])){
                    a = "correct";
                }
                else if(isdigit(s[i])){
                    a = "correct";
                }
                else{
                    a = "incorrect";
                }
            }
            if(a=="incorrect"){
                cout << "Error" << endl;
            }
            else{
                cout << "Success" << endl;
            }
        }
        else{
            cout << "Error" << endl;
        }
    }
}