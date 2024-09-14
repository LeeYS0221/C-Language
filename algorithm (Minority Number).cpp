#include<stdio.h>
int main(){
	int n,m;
	int cnt=0;
	int sum=0;
	scanf("%d %d", &n, &m);
	for(int i=n+1; i<m; i++){
		for(int j=1; j<=i; j++){
			if(i%j==0){
				cnt++;
			}
		}
		if(cnt==2){
			sum++;
		}
		cnt=0;
	}
	printf("%d", sum);
}
