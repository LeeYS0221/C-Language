#include<iostream>
#include<cstdio>
#include<stack>
#include<climits>
#include<vector>

using namespace std;

int main(){
	int N;
	cin >> N;
	stack<pair<int, int> > S;
	vector<int> V;
	S.push({INT_MAX, 0});
	for(int i=1; i<=N; i++){
		int h;
		cin >> h;
		while(S.top().first < h){
			S.pop();
		}
		V.push_back(S.top().second);
		S.push({h, i});
	}
	for(int i=0; i<N; i++){
		cout << V[i] << ' ';
	}
	return 0;
}
