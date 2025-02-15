#include<iostream>
using namespace std;
int main(){
	int n;
	int cnt=0;
	int length=100000;
	cin >> n;
	int trees[n];
	for(int i=0; i<n; i++){
		cin >> trees[i];
	}
	for(int i=0; i<n; i++){
		if(length>trees[i+1]-trees[i]){
			length=trees[i+1]-trees[i];
		}
	}
	for(int i=0; i<n-1; i++){
		if(trees[i+1]-trees[i]!=length){
			cnt+=(trees[i+1]-trees[i])/length-1;
		}
	}
	cout << cnt;
	return 0;
}
