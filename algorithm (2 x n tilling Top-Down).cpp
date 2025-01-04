#include<iostream>
#define MOD 10007
using namespace std;

int d[1001];

int solve(int i){
	if(i==0||i==1){
		return 1;
	}
	if(d[i]!=-1){
		return d[i];
	}
	d[i] = (solve(i-1) + solve(i-2))%MOD;
	return d[i];
}
int main(){
	int n;
	cin >> n;
	for(int i=0; i<=n; i++){
		d[i] = -1;
	}
	cout << solve(n);
	
	return 0;
}
