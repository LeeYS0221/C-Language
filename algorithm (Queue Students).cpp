#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N;
	float H[100001];
	float Hcopy[100001];
	int cnt = 0;
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> H[i];
		Hcopy[i]=H[i];
	}
	sort(H, H+N);
	for(int i=0; i<N; i++){
		if(H[i]!=Hcopy[i]){
			cnt++;
		}
	}
	cout << cnt;
	
	return 0;
}
