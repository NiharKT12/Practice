#include <bits/stdc++.h>

using namespace std;

class q{
    public :
        vector<int> t;

        void insert(int val){
            t.push_back(val);
        }
        void remove(){
            t.erase(t.begin());
        }
};

int solve1(vector<int> q1, vector<int> q2){
    int zc = 0, oc = 0;
    for(int i : q1){
        if(i == 0) zc++;
        else oc++;
    }

    for(int i : q2){
        if(i == 0){
            if(zc == 0)
                return oc;
            zc--;
        }
        if(i == 1){
            if(oc == 0)
                return zc;
            oc--;
        }
    }
    return 0;
}

void solve2(vector<int> q1, vector<int> q2){

}

int solve3(string s, string t){
    return s.find(t) != string::npos ? s.find(t) : -1;
}

int main(){
    q qu;
    qu.insert(5);
    qu.insert(10);
    qu.remove();

    cout << solve3("abcdef", "ggh");

}