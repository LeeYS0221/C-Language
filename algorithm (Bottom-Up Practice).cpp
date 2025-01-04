#include<iostream>
using namespace std;

int d[100];
int fib(int n){
	d[0] = 1;
	d[1] = 1;
	for(int i=2; i<=n; i++){
		d[i] = d[i-1] + d[i-2];
	}
	return d[n];
}
int main(){
	int n;
	cin >> n;
	cout << fib(n);
	
	return 0;
}
