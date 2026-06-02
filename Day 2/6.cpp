#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr = {2, 7, 11, 15, 6, 3};
    int k = 3;

    int l = 0, r = 0;
    int ms = 0, sum = 0;

    while(r < arr.size()){
        sum += arr[r];

        while(r - l + 1 > k){
            sum -= arr[l];
            l++;
        }
        ms = max(sum, ms);
        r++;
    }
    cout << ms;
}