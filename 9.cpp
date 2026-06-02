#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int l = 0;
    int r = 1;
    while(r < s.size() && s[l] != s[r]) r++;

    string t = s.substr(r);

    while(r < s.size() && t[l] == s[r]){
        r++;
        l = (l + 1) % t.size();
    }

    if(r != s.size() - 1) cout << "false";
    else
        cout << "true";
}            
