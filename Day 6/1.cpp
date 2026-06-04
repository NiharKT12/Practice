#include <bits/stdc++.h>
using namespace std;

void rtoi(string s){
    unordered_map<char, int> mp;
    mp['I'] = 1;
    mp['V'] = 5;
    mp['X'] = 10;
    mp['L'] = 50;
    mp['C'] = 100;
    mp['D'] = 500;
    mp['M'] = 1000;

    int sum = 0;
    for(int i = 0; i < s.size() - 1; i++){
            if(mp[s[i]] < mp[s[i + 1]]){
                sum -= mp[s[i]];
            }
            else
                sum += mp[s[i]];
        }
        sum += mp[s[s.size() - 1]];
        cout << sum <<endl;
}

int solve(vector<int> num){
    unordered_set<int> st(num.begin(), num.end());
    
    int ml = INT_MIN;
    for(int i : num){
        if(st.find(i - 1) == st.end()){
            int cur = i;
            int len = 1;
            while(st.find(cur + 1) != st.end()){
                cur++;
                len++;
            }
            ml = max(len, ml);
        }
    }
    return ml;
}

int majorityEle(vector<int> num){
    unordered_map<int, int> mp;
    int n = num.size();
    for(auto i : num){
        mp[i]++;
        if(mp[i] > n / 2)
            return n;
    }
    return -1;

}

string solve2(string s, int row){
    vector<string> v(row);
    int i = 0;
    int sum = 0;
    for(auto ch : s){        
        if(i == row - 1){
            sum = -1;
        }
        if(i == 0){
            sum = 1;
        }
        v[i] += ch;
        i += sum;
    }

    string res = "";
    for(auto c : v){
        res += c;
    }
    return res;
}

int main(){
    //rtoi("III");
    //cout << solve({100, 4, 200, 3, 2, 1});
    //cout<<majorityEle({3, 2, 3});

    cout << solve2("PAYPALISHIRING", 3);
}