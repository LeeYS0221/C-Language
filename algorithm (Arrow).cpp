#include<iostream>
#include<algorithm>
using namespace std;
struct dots{
	int loc;
	int col;
};
int cmp(dots a, dots b){
	if(a.col==b.col){
		return a.loc<b.loc;
	}
	return a.col<b.col;
}
int main(){
	int N;
	int sum=0;
	cin >> N;
	dots d[N];
	for(int i=1; i<=N; i++){
		cin >> d[i].loc >> d[i].col;
	}
	sort(d+1, d+1+N, cmp);
	for(int i=1; i<=N; i++){
		if(d[i].col!=d[i-1].col){
			sum+=d[i+1].loc-d[i].loc;
		}
		else if(d[i].col!=d[i+1].col){
			sum+=d[i].loc-d[i-1].loc;
		}
		else{
			sum+=min(d[i+1].loc-d[i].loc,d[i].loc-d[i-1].loc);
		}
	}
	cout << sum;
	return 0;
}
