#include<iostream>
#include<algorithm>
#define INF 123456789
using namespace std;

int n, d[5001];
int Solve(int i){
	if(i==0){
		return 0;
	}
	if(i<0){
		return INF;
	}
	if(d[i] < INF){
		return d[i];
	}
	int ret = min(Solve(i-3), Solve(i-5)) + 1;
	d[i]=ret;
	return ret;
}
int main(){
	for(int i=0; i<5001; i++){
		d[i]=INF;
	}
	cin >> n;
	int ans = Solve(n);
	if(ans<INF){
		cout << ans;
	}
	else{
		cout << "-1";
	}
	
	return 0;
}

