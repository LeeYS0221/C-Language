#include<iostream>
#include<algorithm>
#include<utility>
using namespace std;
int main(){
	int N;
	pair<int ,int> student[100001];
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> student[i].first >> student[i].second;
	}
	sort(student, student+N);
	for(int i=1; i<=student[N-1].first; i++){
		for(int j=0; j<N; j++){
			if(student[j].first == i){
			cout << student[j].second << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}
