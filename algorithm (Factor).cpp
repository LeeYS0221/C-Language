#include<stdio.h>

int main(){
	int n, k;
	int divide[10000];
	int cnt=0;
	scanf("%d %d", &n, &k);
	for(int i=1; i<=n; i++){
		if(n%i==0){
			divide[cnt+1]=i;
			cnt++;
		}
		if (cnt == k){
			printf("%d", i);
			return 0;
		} 
			
	}
	if(cnt<k){
		printf("0");
		return 0;
	}
}
