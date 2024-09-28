#include<stdio.h>
#include<vector>
using namespace std;
int main(){
	int n;
	vector<int> si;
	
	scanf("%d", &n);
	vector<int> grade(n);
	
	for(int i=0; i<n; i++){
		int temp;
		scanf("%d", &temp);
		si.push_back(temp); 
		//grade.push_back(1); 
	}
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			if(si[i]<si[j]){
				grade[i]++;
			}
		}
	}
	for(int i=0; i<n; i++){
		printf("%d\n", grade[i]+1);
	}
	
	return 0;
}
