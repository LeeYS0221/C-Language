#include<iostream>
#include<utility>
using namespace std;
int main(){
	int N, M;
	int ans=0;
	cin >> N >> M;
	pair<int, int> SL[N];
	pair<int, int> Line[M];
	for(int i=0; i<N; i++){
		cin >> SL[i].first >> SL[i].second;
	} 
	for(int i=0; i<M; i++){
		cin >> Line[i].first >> Line[i].second;
		ans+=((SL[Line[i].second-1].first-SL[Line[i].first-1].first)*(SL[Line[i].second-1].first-SL[Line[i].first-1].first)+(SL[Line[i].second-1].second-SL[Line[i].first-1].second)*(SL[Line[i].second-1].second-SL[Line[i].first-1].second));
	} 
	cout << ans;
	return 0;
}
