#include<stdio.h>
#include<vector>
using namespace std;
int main(){
	vector<int> ai;
	for(int i=0; i<10; i++){
		ai.push_back(i+1);
	}
	for(int i=1; i<=10; i++){
		printf("%d\n", ai[10-i]);
	}
	return 0;
}
