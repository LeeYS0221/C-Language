#include<iostream>
using namespace std;

int m[100];
int fib(int n){
	if(n<=1){
		return n;
	}
	else{
		if(m[n]>0){
			return m[n];
		}
		m[n]=fib(n-1) + fib(n-2);
		return m[n];
	}
}
int main(){
	int n;
	cin >> n;
	cout << fib(n);
	
	return 0;
}
