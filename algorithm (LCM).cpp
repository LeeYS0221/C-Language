#include<iostream>
using namespace std;
int GCD(int x, int y){
	if(y==0){
		return x;
	}
	else{
		return GCD(y, x%y);
	}
}
int main(){
	int a, b;
	cin >> a >> b;
	int g=GCD(a, b);
	cout << g << " " << a/g * b;
	return 0;
}
