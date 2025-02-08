#include<iostream>
using namespace std;
int main(){
	int M, N;
	cin >> M >> N;
	int cnt=0;
	int cntPN=0;
	int pn[1000001];
	for(int i=M; i<=N; i++){
		for(int j=1; j<=i; j++){
			if(i%j==0){
				cnt++;
			}
		}
		if(cnt==2){
			pn[cntPN]=i;
			cntPN++;
		}
		cnt=0;
	}
	for(int i=0; i<cntPN; i++){
		cout << pn[i] << endl;
	}
	return 0;
}
