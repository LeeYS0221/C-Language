#include<iostream>
#include<algorithm>
using namespace std;
struct characters{
	int L;
	int E;
	int P;
};
bool cmp(characters left, characters right){
	if(left.L > right.L){
		return true;
	}
	else if(left.L == right.L){
		if(left.E > right.E){
			return true;
		}
		else if(left.E == right.E){
			return left.P > right.P;
		}
		else{
			return false;
		}
	}
	else{
		return false;
	}
}
int main(){
	int N;
	characters C[100001];
	cin >> N;
	for(int i=0; i<N; i++){
		cin >> C[i].L >> C[i].E >> C[i].P;
	}
	sort(C, C+N, cmp);
	for(int i=0; i<N; i++){
		cout << C[i].L << " " << C[i].E << " " << C[i].P << endl;
	}
	return 0;
}
