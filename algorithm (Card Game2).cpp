#include<iostream>
#include<algorithm>
using namespace std;
int main(){
	int N;
	cin >> N;
	int card[N];
	
	for(int i=0; i<N; i++){
		cin >> card[i];
	}
	sort(card, card+N);
	
	long long ans = card[0];
	int ans_cnt = 1;
	int cnt=1;
	
	for(int i=0; i<N; i++){
		if(card[i] == card[i-1]){
			cnt+=1;
		}
		else{
			cnt=1;
		}
		if(ans_cnt < cnt){
			ans_cnt=cnt;
			ans=card[i];
		}
	}
	cout << ans;
	return 0;
}
