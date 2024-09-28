#include<stdio.h>
int main(){
	int n;
	int ai[100];
	int max=0;
	int min=101;
	int ave=0;
	int maxind=0;
	int minind=0;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++){
		scanf("%d", &ai[i]);
		
		if(max<ai[i]){
			max=ai[i];
			maxind=i;
		}
		if(min>ai[i]){
			min=ai[i];
			minind=i;
		}
	}
	ai[maxind]=0;
	ai[minind]=0;
	for(int i=0; i<n; i++){
		ave+=ai[i];
	}
	printf("%d", ave/(n-2));
}
