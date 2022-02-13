#include<bits/stdc++.h>
using namespace std;
#define int int64_t
int nPr(int n,int r){// example : given n positions and r characters find the number of ways to place the characters
	const int mod = 1e9 + 7;
	vector<int>fact;	
	fact = vector<int>(n + 1);
	fact[1] = 1;
	for(int i = 2;i <= n;i++){ fact[i] = (fact[i - 1] * i) % mod; } // calculating factorials 
	return fact[n] / fact(n - r);	
}
int nCr(int n,int r){ // example : given n points find the number of ways to form a triangle 
	const int mod = 1e9 + 7;
	vector<int>fact;	
	fact = vector<int>(n + 1);
	fact[1] = 1;
	for(int i = 2;i <= n;i++){ fact[i] = (fact[i - 1] * i) % mod; } // calculating factorials 
	return fact[n] / (fact[r] * fact(n - r));
}
signed main(){
	int n,r;
	cin>>n,r;

	
	
}
