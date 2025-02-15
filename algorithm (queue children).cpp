#include<iostream>
using namespace std;
int main(){
	int N;
	int cnt=0;
	cin >> N;
	int a[1000000];
	int b[1000001];
	for(int i=0; i<N; i++){
		cin >> a[i];
	}
	cnt = N;
//일반적인 정렬 코드 
//	for(int i=1; i<=N; i++){
//		for(int j=1; j<=N; j++){
//			if(a[i]<a[j]){
//				int temp;
//				temp=a[i];
//				a[i]=a[j];
//				a[j]=temp;
//			}
//		}
//	}
	for(int i=0; i<N; i++){
		b[a[i]]=b[a[i]-1] +1;
		if(cnt > N -b[a[i]]){
			cnt= N-b[a[i]];
		}
	}
	cout << cnt;
	return 0;
}
