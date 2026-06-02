#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);

    int i = 0, j = s.size() - 1;

    while(i < j){
        while(i < j && !isalpha(s[i])) i++;

        while(i < j && !isalpha(s[j])) j--;

        if(tolower(s[i]) != tolower(s[j])){
            cout <<"NO";
            return 0;
        }
        i++;
        j--;
    }
    cout <<"Yes";
    return 0;
}            
