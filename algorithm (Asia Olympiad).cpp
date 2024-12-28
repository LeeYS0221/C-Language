#include<iostream>
#include<algorithm>
using namespace std;
struct students{
	int nation;
	int number;
	int score;
};
bool cmp(students a, students b){
	return a.score > b.score;
}

int main(){
	int N;
	int cnt=0;
	cin >> N;
	students S[N];
	for(int i=0; i<N; i++){
		cin >> S[i].nation >> S[i].number >> S[i].score;
	}
	sort(S, S+N, cmp);
	
	cout << S[cnt].nation << ' ' << S[cnt].number << endl;
	cnt++;
	cout << S[cnt].nation << ' ' << S[cnt].number << endl;
	cnt++;
	while(S[cnt].nation == S[cnt-1].nation){
		cnt++;
	}
	cout << S[cnt].nation << ' ' << S[cnt].number << endl;
	return 0;
}

