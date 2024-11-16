#include<iostream>
#include<utility>
using namespace std;
int main(){
	int N;
	cin >> N;
	pair<int, int> Team[10001];
	for(int i=0; i<N; i++){
		int tech, art;
		cin >> tech >> art;
		Team[i]=make_pair(tech,art);//{tech, art};
	}
	int ans = 0;
	pair<int, int> s_p = Team[0];
	for(int i=1;i<N;i++){
		if(s_p < Team[i]){
			s_p = Team[i];
			ans = i;
		}
	}
	
	
	cout << ans+1;
	return 0;
}
