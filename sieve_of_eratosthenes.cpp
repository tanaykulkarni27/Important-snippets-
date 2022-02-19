/*
	* Author :- Tanay Kulkarni
	* Date   :- 17-6-2021
	* Time   :- 20:31:30.977672
	* Name   :- solve.cpp
*/
#include<bits/stdc++.h>
using namespace std;
void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}
void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>
void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}
#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif
vector<int>primes(0);
int sz = 0;
void primesieve(){
	int n = 32000;
	bitset<32000>is_bad;
	for(int i = 2;i<=n;i++){
		if(is_bad[i] == 0){
			for(int j = i*i;j<=n;j+=i){
				is_bad[j] = 1;
			}

		primes.push_back(i);
		sz++;
		}
	}
}
void testcase(){
	int n;
	cin>>n;
	int res = 0;
	for(int i = 0;i+1 < sz;i++){
		int tmp = primes[i]*primes[i+1];
		if(tmp > n)
			break;
		res = tmp;
	}
	cout<<res;
	puts("");
}
int main(){
primesieve();
int t;
cin>>t;
for(int i = 1;i<=t;i++){
		cout<<"Case #"<<i<<": ";
		testcase();
}
return 0;
}
