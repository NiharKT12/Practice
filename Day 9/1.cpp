#include <bits/stdc++.h>
using namespace std;

void transpose(vector<vector<int>> &arr){
    for(int i = 0; i < arr.size(); i++){
        for(int j = i; j < arr[0].size(); j++){
            int t = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = t;
        }
    }
}

int main(){
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    for(auto i : arr){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    cout << endl;
    transpose(arr);
    
    for(auto i : arr){
        for(auto j : i){
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}