#include <bits/stdc++.h>
using namespace std;

void reg(){
    string n, pass;
    cout << "enter username";
    cin >> n;
    cout << "Enter password";
    cin >> pass;

}

void login(){
    string n, pass;
    cout << "enter username";
    cin >> n;
    cout << "Enter password";
    cin >> pass;
}

void adlogin(){
    string n, pass;
    cout << "enter username";
    cin >> n;
    cout << "Enter password";
    cin >> pass;
}

int main(){
    while(1){
        int n;
        cin >> n;

        switch(n){
            case 1 : cout <<"Register";
                     reg();
                break;
            case 2 : cout << "login";
                     login();
                break;
            case 3 : cout << "Admin";
                     adlogin();
                break;
            case 4 : cout << "Logout";
                break;
            case 5 : cout << "Exit";
                     return 0;
                break;
            default : cout << "Invalid";
        }
        cout << endl;
    }
    return 0;
} 