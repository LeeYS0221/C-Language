#include<iostream>
#include<algorithm>
using namespace std;

bool cmp(int a, int b){
	return a>b;
}
int main(){
	int N;
	pair<int, int> A[100001];
	int E[100001];
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> A[i].first >> A[i].second;
		E[i]=(A[i].first * A[i].second * A[i].second)/2;
	}
	sort(E, E+N, cmp);
	for(int i=0; i<3; i++){
		for(int j=0; j<N; j++){
			if(E[i]==(A[j].first * A[j].second * A[j].second)/2){
				cout << A[j].first << " " << A[j].second << endl;
			}
		}
	}
	return 0;
}
