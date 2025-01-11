#include<iostream>
#include<algorithm>
using namespace std;
int d[11];
int main(){
	int T;
	cin >> T;
	int n;
	d[1]=1;
	d[2]=2;
	d[3]=4;
	for(int i=0; i<T; i++){
		cin >> n;
		for(int i=4; i<=n; i++){
			d[i]=d[i-1]+d[i-2]+d[i-3];
		}
		cout << d[n] << endl;
	}
	return 0;
}
