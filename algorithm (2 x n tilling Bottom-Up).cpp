#include<iostream>
#include<algorithm>
using namespace std;

int d[1001];
int main(){
	int n;
	cin >> n;
	d[1]=1;
	d[2]=2;
	for(int i=3; i<=n; i++){
		d[i]=d[i-1]+d[i-2];
	}
	
	cout << d[n]%10007;
	
	return 0;
}
