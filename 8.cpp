#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    reverse(s.begin(), s.end());
    int i = 0;
    int j = 0;
    while(i < s.size()){
        while(i < s.size() && s[i] != ' ') i++;

        reverse(s.begin() + j, s.begin() + i);
        j = i + 1;
        i++;
    }
    cout << s;
}            
