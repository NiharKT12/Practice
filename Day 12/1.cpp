#include <bits/stdc++.h>
using namespace std;

class tree{
    public :
        int val;
        tree *left;
        tree *right;
        tree(int val){
            this->val = val;
            left = nullptr;
            right = nullptr;
        }
};

void invert(tree *root){

	if(!root) return;
	
	
	invert(root->left);
	invert(root->right);

	tree *t = root->left;
	root->left = root->right;
	root->right = t;
}

string dup(string s){
	string r = "";
	int j = 0, i =0;
	while(i < s.size() && j < s.size()){
		if(s[i] == s[i + 1])
			i += 2;
		else r += s[i];
		
			
	}
	return r;
}


int sub(vector<int> a){

	int Asum = INT_MIN, sum = 0;
	for(int i = 0; i < a.size(); i++){
		sum += a[i];
		Asum = max(Asum, sum);
		if(sum < 0){
			sum = 0;	
		}
	}
	return Asum;
}

int main(){

    return 0;
}
