#include<iostream>
using namespace std;

int n;
int cnt;
int ans=0;
int anim[500001][3];

int AnimalGroup(int leftL, int leftR, int rightL, int rightR){
	if(leftL>=rightL && leftR<=rightR){
		cnt++;
	}
}
int main(){
	cin >> n;
	for(int i=0; i<n; i++){
		cin >> anim[i][0] >> anim[i][1] >> anim[i][2];
	}
	
	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			AnimalGroup(anim[j][1], anim[j][2], anim[i][1], anim[i][2]);
		}
		if(ans<cnt){
			ans=cnt;
		}
		cnt=0;
	}
	
	cout << ans;
	return 0;
}
