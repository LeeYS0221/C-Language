#include<iostream>
using namespace std;
int cnt;
int comp(int left1, int left2, int right1, int right2){
	if(left1<=left2 && right1>=right2){
		cnt++;
	}
}
int main(){
	int n;
	int max=0;
	cin >> n;
	int numb[n];
	int l[n];
	int r[n];
	for(int i=0; i<n; i++){
		cin >> numb[i] >> l[i] >> r[i];
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			comp(l[i], l[j], r[i], r[j]);
		}
		if(max<cnt){
			max=cnt;
		}
		cnt=0;
	}
	cout << max;
	return 0;
}
