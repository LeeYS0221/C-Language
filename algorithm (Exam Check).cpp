#include<stdio.h>

int main(){
	int n, bi;
	int ai[1000001];
	int ansN=0;
	scanf("%d", &n);
	
	for(int i=0; i<n; i++){
		scanf("%d", &ai[i]);
	}
	for(int j=0; j<n; j++){
		scanf("%d", &bi);
		if(ai[j]==bi){
			ansN++;
		}
	}
	printf("%d", ansN);
	return 0;
}
