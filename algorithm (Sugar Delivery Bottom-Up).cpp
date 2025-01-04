#include<iostream>
#include<algorithm>
#define INF 1234567890
using namespace std;

int d[5001];

int main(){
	int N;
	cin >> N;
	for(int i=0; i<5001; i++){
		d[i] = INF;
	}
	d[3]=1;
	d[5]=1;
	for(int i=0; i<=5000; i++){
		d[i]=min(d[i-5], d[i-3])+1;
	}
	if(d[N]<INF){
		cout << d[N];
	}
	else{
		cout << "-1";
	}
	return 0;
}
