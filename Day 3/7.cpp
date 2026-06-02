#include <bits/stdc++.h>
using namespace std;

int s(string s){
    int c = 0; 
    for(auto i : s)
        c++;
    return c;
}

int f(string s, char c){
    for(int i = 0; i < s.size(); i++){
        if(s[i] == c)
            return i;
    }
    return -1;
}

bool check(string s){
    return !s.size();
}

string ss(int l, int r, string s){
    r = r > s.size() ? s.size() : r;
    string res = "";
    for(int i = l; i < r; i++){
        res += s[i];
    }
    return res;
}

int main(){
    string s1, s2;
    getline(cin, s1);
    //getline(cin, s2);
    s2 = "";

    cout << ss(0, 8, s1) << "\n" << (check(s2) ? "empty" : "not empty") << "\n";
    cout << f(s1, 'l');
    return 0;
}