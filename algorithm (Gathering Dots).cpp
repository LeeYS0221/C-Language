#include<iostream>
#include<algorithm>
using namespace std;
int f(int a){
	if(a>0){
		return a;
	}
	else{
		return -1*a;
	}
}
int main(){
	int N, M;
	int x[100001];
	int y[100001];
	int X, Y;
	int sum=0;
	cin >> N >> M;
	for(int i=0; i<M; i++){
		cin >> x[i] >> y[i];
	}
	sort(x, x+M);
	sort(y, y+M);
	X=x[M/2];
	Y=y[M/2];
	
	for(int i=0; i<M; i++){
		sum+=f(X-x[i])+f(Y-y[i]);
	}
	cout << sum;
	return 0;
}
