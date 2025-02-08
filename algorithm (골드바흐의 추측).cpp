#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int p[100];
	int pn=0;
	bool c[101];
	int N=100;
	int a, b;
	for(int i=2; i<=N; i++){
		if(c[i] == false){
			p[pn++] = i;
			for(int j=i*i; j<=N; j+=i){
				c[j]=true;
			}
		}
	}
	int n;
	while(true){
		cin >> n;
		if(n==0){
			break;
		}
		else{
			for(int i=0; i<pn; i++){
				for(int j=0; j<pn; j++){
					if(p[i]+p[j]==n){
						a=p[j];
						b=p[i];
					}
				}
			}
			cout << n << "=" << a << "+" << b << endl;
		}
	}
	return 0;
}
